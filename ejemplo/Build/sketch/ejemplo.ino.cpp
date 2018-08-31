#include <Arduino.h>
#line 1 "C:\\Users\\judlup\\Desktop\\WorkShop 1 - Arduino desde cero\\ejemplo\\ejemplo.ino"
#line 1 "C:\\Users\\judlup\\Desktop\\WorkShop 1 - Arduino desde cero\\ejemplo\\ejemplo.ino"
#include <EEPROM.h>

#define LED 13
int address = 13;
byte value;
  
#line 7 "C:\\Users\\judlup\\Desktop\\WorkShop 1 - Arduino desde cero\\ejemplo\\ejemplo.ino"
void setup();
#line 15 "C:\\Users\\judlup\\Desktop\\WorkShop 1 - Arduino desde cero\\ejemplo\\ejemplo.ino"
void loop();
#line 7 "C:\\Users\\judlup\\Desktop\\WorkShop 1 - Arduino desde cero\\ejemplo\\ejemplo.ino"
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED,OUTPUT);

  
}

void loop() {
  // put your main code here, to run repeatedly:
  EEPROM.write(address, 100);
  value = EEPROM.read(address);
  Serial.print(address);
  Serial.print("\t");
  Serial.print(value, DEC);
  Serial.println();
  digitalWrite(13,HIGH);
  delay(500);
  Serial.println("Hola Mundo");
  delay(1000);
  digitalWrite(13,LOW);
  delay(500);
}
|
