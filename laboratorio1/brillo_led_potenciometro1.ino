// aumento de brillo con potenciometro

int LED=3;  //LED conectado al pin digital 3 
int BRILLO; //variable para guardar el brillo calculado
int POT=0;  //pin del potenciometro(A0)

void setup(){
  pinMode(LED,OUTPUT); //LED como salida 
}
void loop(){
  BRILLO= analogRead(POT)/4;  // Lee potenciómetro (0-1023) y escala a (0-255)
  analogWrite(LED, BRILLO);   // Ajusta brillo del LED con PWM
}