int sensor = A0;
int nivel_umidade;
#define rele 3

void setup(){
  Serial.begin(9600);
  pinMode(sensor, INPUT);
  pinMode(rele, OUTPUT);
}
void loop(){
  nivel_umidade = analogRead(sensor);
  Serial.print("\n Umidade:");
  Serial.print(nivel_umidade);

  if(nivel_umidade > 600){
    digitalWrite(rele, LOW);
      Serial.print("LIGADO");
  }else{
    digitalWrite(rele, HIGH);
      Serial.print("DESLIGADO");
  }
}
