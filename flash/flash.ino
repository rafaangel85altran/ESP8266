#include <SoftwareSerial.h>

SoftwareSerial wifi(10,11); // RX, TX

void setup()
{
Serial.begin(9600); // FTDI
wifi.begin(9600); // GPS; 9600 first time, 38400 second time
}

void loop()
{
if (Serial.available())
wifi.write(Serial.read());
if (wifi.available())
Serial.write(wifi.read());
}
