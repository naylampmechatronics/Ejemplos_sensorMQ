/****************************************************************************************
 Analog Sensor 
 
  Para realizar lecturas por el pin analógico de un sensor MQ
 
 Conexiones:
  -----------------------
  Sen.MQ -> Arduino
  -----------------------
  VCC    -> 5V  
  DOUT   -> NC  
  AOUT   -> A0  
  GND    -> GND   
  ---------------
  * Puede cambiar la conexión a otro pin analógico del arduino modificando la variable que define el pin
  
 Ejemplo desarrollado por Naylamp Mechatronics
 
 Última modificación el 29/08/2020

 Más información en:
   -https://naylampmechatronics.com/blog/42_Tutorial-sensores-de-gas-MQ2-MQ3-MQ7-y-MQ13.html
   -https://github.com/naylampmechatronics/Ejemplos_sensorMQ

**************************************************************************************************/
int pin_mq = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  int adc_MQ = analogRead(pin_mq); //Lemos la salida analógica del MQ
  float voltaje = adc_MQ * (5.0 / 1023.0); //Convertimos la lectura en un valor de voltaje

  Serial.print("adc:");
  Serial.print(adc_MQ);
  Serial.print("    voltaje:");
  Serial.println(voltaje);
  delay(100);
}
