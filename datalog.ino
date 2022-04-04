/*
Data Acquisition
DHT11 reads the surrounding temperature/humidity then stores it in a sd card
*/
//libraries use & defining the DHT11 - connected to pin 7
#include "DHT.h"
#include <SPI.h>
#include <SD.h>
#define DHTPin 7
#define DHTTYPE DHT11
//defining multiple variables
float humi = 0.0;
float temp = 0.0;
DHT dht(DHTPin,DHTTYPE);
const int chipSelect = 10;//SD card connected to pin 4
File dataFile;

void setup() {
SD.begin(chipSelect);
dht.begin();
}
void loop() {
humi = dht.readHumidity();
temp = dht.readTemperature();
//fro every 3sec write temp/humi val to sd card
dataFile = SD.open("datalog.cvs",FILE_WRITE);
dataFile.print("temp:");
dataFile.print(temp);
dataFile.print(",");
dataFile.print("humi:");
dataFile.print(humi);
dataFile.println();
dataFile.close();
delay(500); 
}
