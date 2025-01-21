#include <WiFi.h>
#include <WiFiManager.h>
#include <WebSocketsClient.h>
#include <XPowersLib.h>
#include <ArduinoJson.h>
#include "LV_Helper.h"
#include "utilities.h"
#include "ui.h"
#include <ESP32Time.h>
ESP32Time rtc(0); 
static PowersSY6970 PMU;
bool isCharging=1;
uint32_t cycleInterval;

void setBrightness(uint8_t value)
{
#ifdef USING_DISPLAY_PRO_V1
    ledcWrite(LEDC_TFT_CH, value);
#else
    static uint8_t level = 0;
    static uint8_t steps = 16;
    if (value == 0) {
        digitalWrite(BOARD_TFT_BL, 0);
        delay(3);
        level = 0;
        return;
    }
    if (level == 0) {
        digitalWrite(BOARD_TFT_BL, 1);
        level = steps;
        delayMicroseconds(30);
    }
    int from = steps - level;
    int to = steps - value;
    int num = (steps + to - from) % steps;
    for (int i = 0; i < num; i++) {
        digitalWrite(BOARD_TFT_BL, 0);
        digitalWrite(BOARD_TFT_BL, 1);
    }
    level = value;
    Serial.print ("setBrightness : "); Serial.println(level);
#endif
}

int findTargetVoltage(int myVoltage) {
    // Array of target voltages
    int targetVoltages[] = {
        3840, 3856, 3872, 3888, 3904, 3920, 3936, 3952, 3968, 3984, 4000, 4016, 4032, 4048, 4064, 4080,
        4096, 4112, 4128, 4144, 4160, 4176, 4192, 4208, 4224 };
    int size = sizeof(targetVoltages) / sizeof(targetVoltages[0]);

    // Initialize closest value and smallest difference
    int closest = targetVoltages[0];
    int smallestDifference = abs(myVoltage - closest);

    // Iterate through the array to find the nearest voltage
    for (int i = 1; i < size; ++i) {
        int difference = abs(myVoltage - targetVoltages[i]);
        if (difference < smallestDifference) {
            smallestDifference = difference;
            closest = targetVoltages[i];
        }
    }

    return closest;
}

int findTargetCurrent(int myCurrent) {
    // Array of target currents
    int targetCurrents[] = {
        64, 128, 192, 256, 320, 384, 448, 512, 576, 640, 704, 768, 832, 896, 960, 1024,
        1088, 1152, 1216, 1280, 1344, 1408, 1472, 1536, 1600, 1664, 1728, 1792, 1856, 1920,
        1984, 2048, 2112, 2176, 2240, 2304, 2368, 2432, 2496, 2560, 2624, 2688, 2752, 2816,
        2880, 2944, 3008, 3072, 3136, 3200, 3264, 3328, 3392, 3456, 3520, 3584, 3648, 3712,
        3776, 3840, 3904, 3968, 4032, 4096, 4160, 4224, 4288, 4352, 4416, 4480, 4544, 4608,
        4672, 4736, 4800, 4864, 4928, 4992, 5056
    };
    int size = sizeof(targetCurrents) / sizeof(targetCurrents[0]);

    // Initialize closest value and smallest difference
    int closest = targetCurrents[0];
    int smallestDifference = abs(myCurrent - closest);

    // Iterate through the array to find the nearest current
    for (int i = 1; i < size; ++i) {
        int difference = abs(myCurrent - targetCurrents[i]);
        if (difference < smallestDifference) {
            smallestDifference = difference;
            closest = targetCurrents[i];
        }
    }
    return closest;
}
void setCURRENT(lv_event_t * e)
{
   const char *text = lv_textarea_get_text(ui_TextArea1);
   int crgCur = atoi(text);
   int nearestCur = findTargetCurrent(crgCur);
   PMU.setChargerConstantCurr(nearestCur);
}

void crgOnOF(lv_event_t * e)
{
  isCharging=!isCharging;
    if(isCharging)
    {
    PMU.enableCharge();
    lv_label_set_text(ui_onoff, "ON");
    }
    else
    {
      PMU.disableCharge();
      lv_label_set_text(ui_onoff, "OFF");
    }
}


void setVOLTAGE(lv_event_t * e)
{
   const char *text = lv_textarea_get_text(ui_TextArea2);
   int inputVoltage = atoi(text);
   int nearestVoltage = findTargetVoltage(inputVoltage);
   PMU.setChargeTargetVoltage(nearestVoltage);
}

void setup() {
     pinMode(BOARD_TFT_BL, OUTPUT);
     pinMode(1,OUTPUT);
     pinMode(2,OUTPUT);
     pinMode(3,OUTPUT);

    Serial.begin(115200);
    bool result = PMU.init(Wire, BOARD_I2C_SDA, BOARD_I2C_SCL, SY6970_SLAVE_ADDRESS);

    if (result == false) {
        while (1) {
            Serial.println("PMU is not online...");
            delay(50);
        }
    }
   
    PMU.setInputCurrentLimit(1000);
    // Set the charging target voltage, Range:3840 ~ 4608mV ,step:16 mV
    PMU.setChargeTargetVoltage(4224);
    // Set the precharge current , Range: 64mA ~ 1024mA ,step:64mA
    PMU.setPrechargeCurr(64);
    // Set the charging current , Range:64~5056mA ,step:64mA
    PMU.setChargerConstantCurr(320);
    // When the battery is not connected and the USB is plugged in, the board's LED status indicator light will flash.
    // You can use `PMU.disableStatLed();` to turn off the indicator light,
    // but this means that if the battery is connected for charging, the LED light will also be disabled.
    // PMU.disableStatLed();
    // Enable charging led
    PMU.enableStatLed();
    // To obtain voltage data, the ADC must be enabled first
    PMU.enableADCMeasure();
    // For devices that have been connected to the battery, the charging function is turned on by default.
    // PMU.enableCharge();

    // For boards without an external battery, the charging function should be turned off, otherwise the power supply current of the power chip will be limited.
    //PMU.disableCharge();

    rtc.setTime(0, 0, 0, 1, 1, 2025);  // 17th Jan 2021 15:24:30
    lv_helper();
    ui_init();
    setBrightness(7);
     
}


void loop() {
   if (millis() > cycleInterval) {
       /*

        Serial.print(PMU.isVbusIn() ? "Connected" : "Disconnect"); Serial.print("\t");
        Serial.print(PMU.getVbusVoltage()); Serial.print("\t");
        Serial.print(PMU.getBattVoltage()); Serial.print("\t");
        Serial.print(PMU.getSystemVoltage()); Serial.print("\t");
        Serial.print("0x");
        Serial.print(PMU.getBusStatus(), HEX); Serial.print("\t");
        Serial.print(PMU.getBusStatusString()); Serial.print("\t");
        Serial.print("0x");
        Serial.print(PMU.chargeStatus(), HEX); Serial.print("\t");
        Serial.print(PMU.getChargeStatusString()); Serial.print("\t");

        Serial.print(PMU.getChargeTargetVoltage()); Serial.print("\t");
        Serial.print(PMU.getChargerConstantCurr()); Serial.print("\t");
        Serial.print(PMU.getPrechargeCurr()); Serial.print("\t");
        Serial.print(PMU.getNTCStatus()); Serial.print("\t");
        Serial.print(PMU.getNTCStatusString()); Serial.print("\t");

        Serial.println();
        Serial.println();
        */
        lv_label_set_text(ui_batVoltage, String(PMU.getBattVoltage()).c_str());
        lv_label_set_text(ui_chargingStatus, PMU.getChargeStatusString());
        if(PMU.isVbusIn())
        lv_label_set_text(ui_usbLBL, "CONNECTED");
        else
        lv_label_set_text(ui_usbLBL, "DISCONNECTED");

        lv_label_set_text(ui_inVoltageLBL, String(PMU.getVbusVoltage()).c_str());
        lv_label_set_text(ui_trgVOL, String(PMU.getChargeTargetVoltage()).c_str());
        lv_label_set_text(ui_chCur, String(PMU.getChargerConstantCurr()).c_str());
        lv_label_set_text(ui_sysVol, String(PMU.getSystemVoltage()).c_str());


        lv_label_set_text(ui_timeLBL, rtc.getTime().c_str());
        cycleInterval = millis() + 500;
    }

  
 lv_task_handler();
 delay(5);

 
}
