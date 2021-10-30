# ESP32CAM
Contiene los programas para el Diplomado de Internet de las Cosas de Samsung.

## PINES UTILIZADOS
 * GPIO 4 - Flashlight: funciona con lógica directa. Es decir, para apagarlo utilizamos LOW y para encenderlo HIGH.
 * GPIO 33 – Built-in Red LED: funciona con lógica indirecta. Para apagarlo utilizamos HIGH y para encenderlo LOW.

Más información sobre los pines [en este blog](https://randomnerdtutorials.com/esp32-cam-ai-thinker-pinout/) o en este [repo](https://github.com/raphaelbs/esp32-cam-ai-thinker/blob/master/docs/esp32cam-pin-notes.md)

## CARGAR CÓDIGO
Para cargar el código desde la IDE de Arduino al ESP32CAM (AI-Thinker) debemos conectar el microcontrolador a la computadora mediante el FTDI de la siguiente forma:

| ESP32CAM | FTDI |
| ------------- | ------------- |
| GND	| GND |
| 5V |	VCC (5V) |
| U0R |	TX |
| U0T |	RX |
| GPIO 0	| GND |

**IMPORTANTE** 
- Muchos FTDI tienen un puente que permite seleccionar 3.3V o 5V. Asegúrese de que el puente esté en el lugar correcto para seleccionar 5V.
- Una vez cargado el programa, presionar el botón de RST del ESP32CAM
- GPIO 0 debe estar conectado a GND para que pueda cargar el código. Una vez cargado el programa, desconectar el puente entre estas terminales.

Los pasos detallados se encuentran en [este](https://randomnerdtutorials.com/program-upload-code-esp32-cam/) blog
