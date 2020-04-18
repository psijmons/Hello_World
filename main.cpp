// lesson20, expanded with 5 LEDs different colors
// 330 Ohm resistors / LED

#include <Arduino.h>
#define onboard 13

// LGB LED separate on analog pins
int redLED = A1;
int greenLED = A2;
int blueLED = A3;
int dt = 100;

void setup()
{
  // put your setup code here, to run once:
  pinMode(onboard, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(onboard, LOW);

  delay(1000);
  digitalWrite(onboard, HIGH);
  digitalWrite(12, HIGH);
  delay(100);
  digitalWrite(11, HIGH);
  delay(100);
  digitalWrite(10, HIGH);
  delay(100);
  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(8, HIGH);

  delay(250);

  //RGB = white
  digitalWrite(redLED, HIGH);
  digitalWrite(greenLED, HIGH);
  digitalWrite(blueLED, HIGH);
  delay (dt);
 //off
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(blueLED, LOW);
  delay (dt);

//RGB = red
  digitalWrite(redLED, HIGH);
  digitalWrite(greenLED, LOW);
  digitalWrite(blueLED, LOW);
  delay (dt);
 //off
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(blueLED, LOW);
  delay (dt);

  //RGB = blue
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(blueLED, HIGH);
  delay (dt);
 //off
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(blueLED, LOW);
  delay (dt);

  //RGB = green
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, HIGH);
  digitalWrite(blueLED, LOW);
  delay (dt);
 //off
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(blueLED, LOW);
  delay (dt);


  //RGB = yellow
  analogWrite(redLED, 200);
  analogWrite(greenLED, 200);
  analogWrite(blueLED, 0);
  delay (dt);

 //off
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(blueLED, LOW);


  delay(250);

  digitalWrite(12, LOW);
  delay(100);
  digitalWrite(11, LOW);
  delay(100);
  digitalWrite(10, LOW);
  delay(100);
  digitalWrite(9, LOW);
  delay(100);
  digitalWrite(8, LOW);
  delay(100);

  Serial.println("loop completed");
}
