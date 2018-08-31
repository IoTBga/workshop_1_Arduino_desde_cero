#include <EEPROM.h>

#define LED 13
int address = 13;
byte value;
  
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