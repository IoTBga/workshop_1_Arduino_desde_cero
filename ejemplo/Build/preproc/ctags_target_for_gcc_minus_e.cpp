# 1 "C:\\Users\\judlup\\Desktop\\WorkShop 1 - Arduino desde cero\\ejemplo\\ejemplo.ino"
# 1 "C:\\Users\\judlup\\Desktop\\WorkShop 1 - Arduino desde cero\\ejemplo\\ejemplo.ino"
# 2 "C:\\Users\\judlup\\Desktop\\WorkShop 1 - Arduino desde cero\\ejemplo\\ejemplo.ino" 2


int address = 13;
byte value;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(13,0x1);


}

void loop() {
  // put your main code here, to run repeatedly:
  EEPROM.write(address, 100);
  value = EEPROM.read(address);
  Serial.print(address);
  Serial.print("\t");
  Serial.print(value, 10);
  Serial.println();
  digitalWrite(13,0x1);
  delay(500);
  Serial.println("Hola Mundo");
  delay(1000);
  digitalWrite(13,0x0);
  delay(500);
}
|
