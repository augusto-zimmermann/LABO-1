// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(7, INPUT);
  Serial.print("Puerto serie iniciado");
}

void loop()
{
  int Lectura_Botoncito = digitalRead(7);
  
  if (Lectura_Botoncito)
  {
    Serial.println(Lectura_Botoncito);
    Serial.println("No apretaste el botoncito");
  }
  else
  {
    Serial.println(Lectura_Botoncito);
    Serial.println("Apretaste el botoncito");
  }
}