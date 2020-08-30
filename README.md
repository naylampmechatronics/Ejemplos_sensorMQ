# Ejemplos_sensoresMQ
Códigos de ejemplo para sensores de gases  de la serie MQ

![Sensor de Alcohol MQ3](https://naylampmechatronics.com/249-large_default/sensor-de-alcohol-mq3.jpg)
![Sensor de Gas MQ2](https://naylampmechatronics.com/262-large_default/sensor-de-gas-mq2.jpg)

Información detallada de los ejemplos en: [Tutorial sensores de gas MQ](https://naylampmechatronics.com/blog/42_Tutorial-sensores-de-gas-MQ2-MQ3-MQ7-y-MQ13.html)

## Contenido
* **DigitalSensor:** Para realizar lecturas por el pin digital de un sensor MQ.
* **AnalogSensor:** Para realizar lecturas por el pin analógico de un sensor MQ.
* **Alcoholimetro:** Para realizar lecturas precalibradas de un sensor MQ
 
## Requerimientos
 **Software**
  * IDE Arduino
  
 **Hardware**
  * [Arduino Uno](https://naylampmechatronics.com/arduino-tarjetas/8-arduino-uno-r3.html) (o cualquier modelo)
  * Sensor ([MQ3](https://naylampmechatronics.com/sensores-gas/72-sensor-de-alcohol-mq3.html), [MQ2](https://naylampmechatronics.com/sensores-gas/71-sensor-de-gas-mq2.html), [MQ135](https://naylampmechatronics.com/sensores-gas/73-sensor-calidad-aire-mq135.html), etc)
  
## Conexiones
### Ejemplo 1: DigitalSensor

 Sensor MQ | Arduino
  ---------|-------------
  VCC    | 5V  
  DOUT   | D2  
  AOUT   | NC  
  GND    | GND   
 
  Puede cambiar la conexión a otro pin digital del arduino modificando la variable que define el pin

### Ejemplo 2 y 3: AnalogSensor y Alcoholimetro

  Sensor MQ | Arduino
  ------|---------
  VCC   | 5V  
  DOUT  | NC  
  AOUT  | A0  
  GND   | GND   

  Puede cambiar la conexión a otro pin analógico del arduino modificando la variable que define el pin

## Licencia
Los ejemplos son Open Source, creados por el equipo de Naylamp Mechatronics bajo [licencia MIT](LICENSE)
 
## Links 
 * [Tutorial sensores de gas MQ](https://naylampmechatronics.com/blog/42_Tutorial-sensores-de-gas-MQ2-MQ3-MQ7-y-MQ13.html)
 * [Sensores de gas](https://naylampmechatronics.com/36-sensores-gas)




