//display library
#include <LiquidCrystal.h>
 
int trig = 9; // pin TRIG sensor
int echo = 8; // pin ECHO sensor
float time; // signal timming 
float distance_cm; //distance in centimeters
float distance_in; //distance in inches
 

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 
void setup() {
 
 pinMode(trig,OUTPUT);
 digitalWrite(trig,LOW);
 delayMicroseconds(10);
 pinMode(echo,INPUT);
}
 
void loop() {
 
 digitalWrite(trig, HIGH);
 delayMicroseconds(10);
 digitalWrite(trig, LOW);
 time = pulseIn(echo, HIGH);
 distance_cm = time / 29.4 / 2;
 distance_in = time / 74.7 / 2;
 //result in display
 lcd.begin(20, 4);
 lcd.setCursor(1,0);
 lcd.print("distance: ");
 lcd.print(distance_cm);
 lcd.print(" cm");
 lcd.setCursor(12,1);
 lcd.print(distance_in);
 lcd.print(" in"); 

 delayMicroseconds(200);
}
