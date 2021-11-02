/*
 * Este programa realiza una conexión entre el ESP32CAM y el sensor ultrasónico HC-SR04 
 * que mide la distancia de separación entre el sensor y un objeto cualquiera.
 */

// Bibliotecas 
#include <Ultrasonic.h> //Biblioteca del sensor ultrasónico

//Constantes
const int TRIGGER = 14; // Trigger manda la señal ultrasonica.
const int ECHO = 15; // Echo se encarga de recibir la señal que robata en el objeto.

//Variables
int distance; // Distancia entre el sensor y el objeto

//Objetos
Ultrasonic ultrasonic(TRIGGER,ECHO); //Objeto utilizado para medir la distancia con el sensor

void setup() {
  Serial.begin(115200); //Conexión que sirve para obtener la distancia medida con el sensor en el monitor serial
}

void loop() {
  distance = ultrasonic.read(); //Hacemos el calculo de la distancia
  
  Serial.print("Distance in CM: "); //Salidas en pantalla de la distancia medida
  Serial.println(distance);
  delay(1000); //Retrasamos la proxima salida en pantalla un segundo
}
