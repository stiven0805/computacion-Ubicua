int SENSOR;
float TEMPERATURA;

void setup() {
  Serial.begin(9600);
}

void loop() {
  SENSOR = analogRead(A0);                        // Valor de 0 a 1023
  TEMPERATURA = ((SENSOR * 5000.0) / 1023) / 10;  // Conversión
  Serial.print("ADC: ");  
  Serial.print(SENSOR);
  Serial.print("  ->  Temp: ");
  Serial.println(TEMPERATURA, 1);
  delay(2000);
}
//simulacion en: https://www.tinkercad.com/things/kQWaRs7khCj-temperatura-lm35?sharecode=G41Fw_Pc9cBk75myrezJSxF1D_4hbP4_Xuv0v__iZME
