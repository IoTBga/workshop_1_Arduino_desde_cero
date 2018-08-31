void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int valor_1 = 10;
  int valor_2 = 20;

  for(int i=0; i <= valor_2;i ++)
  {
    valor_1 = valor_1 + 1;
    Serial.println("Valor_1"+valor_1);
    valor_1 = 8;
  }
} 

void loop() {
  // put your main code here, to run repeatedly:

}
