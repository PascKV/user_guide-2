/*
DC motor with IC cw/ccw
the motor will turn clockwise(cw) then it will turn counter clockwise(ccw)
*/

const int cw  = 2;
const int ccw = 4;

void setup() {
// defining pins as output
pinMode(2,OUTPUT);
pinMode(4,OUTPUT);
}

void loop() {
/* 
motor will turn cw for 5sec then stop for 2sec then it will turn ccw for 5sec
then stop another 2sec then restart and repeat
*/
digitalWrite(2,HIGH);
delay(5000);
digitalWrite(2,LOW);
delay(2000);
digitalWrite(4,HIGH);
delay(5000);
digitalWrite(4,LOW);
delay(2000);
}
