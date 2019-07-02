#include <ArduinoIoTCloud.h>
#include <WiFiConnectionManager.h>
#include "arduino_secrets.h"

// include the THING_ID here
const char THING_ID[] = "";

// gets the variables from arduino_secrets.h
const char SSID[]     = SECRET_SSID;    // Network SSID (name)
const char PASS[]     = SECRET_PASS;    // Network password (use for WPA, or use as key for WEP)

// declares the IOT Cloud Functions
void onIOTpushButtonChange();
bool IOTmouseInside;
bool IOTcaptureReady;
bool IOTpushButton;
String IOTmessage;

// Initializes the properties for the Arduino IOT Cloud item
void initProperties(){
  ArduinoCloud.setThingId(THING_ID);
  ArduinoCloud.addProperty(IOTmouseInside, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(IOTcaptureReady, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(IOTpushButton, READWRITE, ON_CHANGE, onIOTpushButtonChange);
  ArduinoCloud.addProperty(IOTmessage, READ, ON_CHANGE, NULL);
  IOTmouseInside = false;
  IOTcaptureReady = false;
  IOTpushButton = false;
  IOTmessage = "Hi! Mousetrap is connected to Arduino IOT Cloud. Please setup Mousetrap and press push button!";
}

ConnectionManager *ArduinoIoTPreferredConnection = new WiFiConnectionManager(SSID, PASS);
