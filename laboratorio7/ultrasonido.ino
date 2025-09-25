int TRIG=10;
int ECO=9;
int LED= 3;
int DURACION;
int DISTANCIA;

void setup(){
  pinMode(TRIG, OUTPUT);
  pinMode(ECO, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  digitalWrite(TRIG, HIGH);
  delay(1);
  digitalWrite(TRIG, LOW);
  DURACION= pulseIn(ECO, HIGH);
  DISTANCIA =DURACION /58.2;
  Serial.println(DISTANCIA);
  delay(200);
  if(DISTANCIA <= 20 && DISTANCIA >=0){
    digitalWrite(LED, HIGH);
    delay(DISTANCIA *10);
    digitalWrite(LED,LOW);
  }


}         
//simulacion del programa en: https://www.tinkercad.com/things/eDtbxDvB25w-ultrasonido?sharecode=U8fc3_VaP1oggb1Kb54IgbT0GWmsJQzoM3VVN2_rnm8
