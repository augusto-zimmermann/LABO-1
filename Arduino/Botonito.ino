// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(8, INPUT);
  
  pinMode(7, INPUT); //PARA EL BOTONITO
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(13,OUTPUT);
  Serial.print("INICIÉ EL PUERTO SERIE");
}

void loop()
{
	int Lectura= digitalRead(8);
  	int LectutraBotonito = digitalRead(7);
  
  if (LectutraBotonito){
    Serial.println(LectutraBotonito);
    Serial.println ("APRETASTE EL BOTONITO");
  }else{
    Serial.println ("NO APRETASTE EL BOTONITO");
  }
  	int lecturaAnalogica= analogRead(A0);
    int lecturaLdr= analogRead(A1);
  	//Serial.println(Lectura);
    //Serial.println(lecturaLdr);
  if (Lectura==HIGH){
    digitalWrite(13,HIGH);
  }else{
    digitalWrite(13,LOW);
  }
}