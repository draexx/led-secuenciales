// C++ code
//
const int bit = 8;
int salida[bit] = {2, 3, 4, 5, 6, 7, 8, 9};// Pines digitales para los LEDs
int timeDelay = 1000; // 1 segundo de retardo
void setup(){
   // Configurar todos los pines como salidas
  for (int i = 0; i < bit; i++){
    pinMode(salida[i],OUTPUT); // Inicialmente apagados
  }
}

void loop(){
  // Secuencia 1: Encendido secuencial de izquierda a derecha
   for (int i = 0; i < bit; i++){
     digitalWrite(salida[i], HIGH); 
     delay(timeDelay);
     digitalWrite(salida[i], LOW); 
   }
   // Secuencia 2: Encendido secuencial de derecha a izquierda
   for (int i = bit - 1; i >= 0; i--) {
    digitalWrite(salida[i], HIGH);
    delay(timeDelay);
    digitalWrite(salida[i], LOW);
  }
}
