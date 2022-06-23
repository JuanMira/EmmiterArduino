#include <Arduino_JSON.h>
#include <HardwareSerial.h>
#include <string.h>

JSONVar res;
JSONVar data;
bool flag = false;

#define LED_13_PIN 13

void setup()
{
  Serial.begin(9600);
}

void Test_Data_Init()
{
  data["Data1"] = "test";
  data["Data2"] = "test";
  data["Data3"] = "test";
  data["Data4"] = "test";
  data["Data5"] = "test";
  data["Data6"] = "test";
}

void loop()
{
  while (Serial.available() > 0)
  {
    String message = Serial.readString();
    Test_Data_Init();
    if (message == "connect")
    {
      res["deviceStatus"] = true;
      res["type"] = "Connection";
      res["data"] = null;
      Serial.println(res);
    }
    else if (message == "getData")
    {
      res["deviceStatus"] = true;
      res["type"] = "Data";
      res["data"] = data;
      Serial.println(res);
    }
  }
}
