/*
DHT11 temperature/humidity
DHt11 read temp/humi then print it on the serail monitor
*/
//defining library use & DHT use
#include "DHT.h"
#define DHTPin 7
#define DHTTYPE DHT11
//variables define
float humi = 0.0;
float temp = 0.0;
DHT dht(DHTPin,DHTTYPE);

void setup() {
dht.begin();
Serial.begin(9600);
}
void loop() {
//read & print temp/humi to serail monitor every 1.5sec
humi = dht.readHumidity();
temp = dht.readTemperature();
Serial.print("T:");
Serial.print(temp);
Serial.print(" , H:");
Serial.println(humi);
delay(1500);
}
