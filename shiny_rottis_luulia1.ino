// C++ code
//
int valorTMP = 0;
int pinoTMP = 0;



void setup()
{
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  valorTMP = analogRead(pinoTMP);
  Serial.print("A temperatura lida eh:");
  Serial.println(valorTMP);
  if(valorTMP > 200){
    digitalWrite(5, HIGH);
  	digitalWrite(6, HIGH);
  }
  else{
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
  }
  
  if (valorTMP >= 166){
    digitalWrite(4, HIGH);
  }
  else{
    digitalWrite(4,LOW);
 
  }
  
   delay(1000);
  
}