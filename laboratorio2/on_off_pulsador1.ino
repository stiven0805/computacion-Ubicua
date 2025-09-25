// SISTEMA ON/OFF LED

int PULSADOR = 2;   // Pin donde está el pulsador
int LED = 3;        // Pin donde está el LED
int ESTADO = LOW;   // Variable para guardar el estado del LED

void setup(){ 
  pinMode(PULSADOR, INPUT);  // Pulsador como entrada
  pinMode(LED, OUTPUT);      // LED como salida
}

void loop(){
  while(digitalRead(PULSADOR) == LOW) { }   // Espera a que se presione el botón
  
  ESTADO = digitalRead(LED);                // Lee el estado actual del LED
  digitalWrite(LED, !ESTADO);               // Cambia al estado contrario (ON ↔ OFF)
  
  while(digitalRead(PULSADOR) == HIGH) { }  // Espera a que se suelte el botón
}