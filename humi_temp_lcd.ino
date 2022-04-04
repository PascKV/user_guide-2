/*DHT11 temperature/humidity
DHt11 read temp/humi then print it on the lcd*/
//defining libraries use & DHT use
#include "DHT.h"
#define DHTPin 7
#define DHTTYPE DHT11
#include <LiquidCrystal.h>
float humi = 0.0;
float temp = 0.0;
DHT dht(DHTPin,DHTTYPE);
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
dht.begin();
lcd.begin(16, 2);
}
void loop() {
//read & print temp/humi to lcd screen 
humi = dht.readHumidity();
temp = dht.readTemperature();
lcd.setCursor(0,0);
lcd.print(temp);
lcd.setCursor(0,1);
lcd.print(humi);
}
