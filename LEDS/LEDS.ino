/*
 * Problemas de secuencias de LEDS con el módulo ESP32CAM
 * Estos programas siguen una lógica NO BLOQUEANTE (No utiliza la función "delay()")
 * Este programa hace parpadear el LED1 cada 5 segundos, el LED2 cada 3 segundos y el LED3 cada 1 segundos. 
 * 
 */

//Constantes
const int LED1 = 15; // Este LED se encenderá cada 5 segundos
const int LED2 = 2; // Este LED se encenderá cada 3 segundos
const int LED3 = 14; // Este LED se encenderá cada 1 segundos
const int waiting1 = 5000;
const int waiting2 = 3000;
const int waiting3 = 1000;

//Variables
unsigned long timeNow, timeLast1, timeLast2, timeLast3;
bool datoLED1=0; 
bool datoLED2=0; 
bool datoLED3=0;

void setup() {
  //configuracion de pines
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

  //condiciones iniciales con LED apagados (lógica inversa)
  digitalWrite(LED1, HIGH); 
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);

  //inicialización del tiempo
  timeLast1 = millis();
  timeLast2 = timeLast1;
  timeLast3 = timeLast2;
}

void loop() {
  timeNow= millis();
  if(timeNow-timeLast1>=waiting1){
    datoLED1=toggleLed(LED1,datoLED1);
    timeLast1 = millis();
  }

  if(timeNow-timeLast2>=waiting2){
    datoLED2=toggleLed(LED2,datoLED2);
    timeLast2 = millis();
  }

  if(timeNow-timeLast3>=waiting3){
    datoLED3=toggleLed(LED3,datoLED3);
    timeLast3 = millis();
  }

}

bool toggleLed(int pinLED, bool estado){
  digitalWrite(pinLED, estado);
  return !estado;
}
