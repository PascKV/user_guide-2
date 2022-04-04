/*
the program under is for the servo motor which is controlled by a joystick
by moving the joystick horzontaly (on the x axis) the angle position of the 
stick/arm on the servo will change accordingly
*/

#include <Servo.h>    //servo motor library
Servo myservo;        //defining the servo as myservo

//defining pos & joyval as int variables
int pos;
int joyval;

void setup() {
myservo.attach(3);    //servo connected to pin 3
}

void loop() {
joyval = analogRead(A0);                //read A0 value and store it in joyval
pos = map(joyval, 0, 1023, 0, 180);     //funt. convert bit val to angle
myservo.write(pos);                      //write pos val to myservo
delay(15);                              //wait time
}
