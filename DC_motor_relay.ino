/*
DC motor on/off with relay
the program will turn on/off the dc motor 
*/

void setup() {
  // define pin 7 as an output for tthe dc motor
pinMode(7,OUTPUT);
}

void loop() {

digitalWrite(7,HIGH);   //turn on the dc motor
delay(5000);            //duration the motor stays on (5sec)
digitalWrite(7,LOW);    //turn off the dc motor
delay(3000);            //duration the motor stays off (3sec)
}
