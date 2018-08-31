void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int valor_1 = 10;
  int valor_2 = 20;

  if(valor_1 > valor_2)
  {
    Serial.println("El Valor_1 es mayor");
  }
  else if(valor_1 < valor_2)
  {
    Serial.println("El Valor_2 es mayor");
  }
  else
  {
    Serial.println("Los valores son iguales");
  }
} 

void loop() {
  // put your main code here, to run repeatedly:

}
