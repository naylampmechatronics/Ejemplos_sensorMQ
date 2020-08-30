/****************************************************************************************
 Digital Sensor 
 
  Para realizar lecturas por el pin digital de un sensor MQ
 
 Conexiones:
  -----------------------
  Sen.MQ -> Arduino
  -----------------------
  VCC    -> 5V  
  DOUT   -> D2  
  AOUT   -> NC  
  GND    -> GND   
  ---------------
  * Puede cambiar la conexión a otro pin digital del arduino modificando la variable que define el pin

 Ejemplo desarrollado por Naylamp Mechatronics
 
 Última modificación el 29/08/2020

 Más información en:
   -https://naylampmechatronics.com/blog/42_Tutorial-sensores-de-gas-MQ2-MQ3-MQ7-y-MQ13.html
   -https://github.com/naylampmechatronics/Ejemplos_sensorMQ

**************************************************************************************************/
int pin_mq = 2;

void setup() { 
  Serial.begin(9600);
  pinMode(pin_mq, INPUT);
}

void loop() {
  
  boolean mq_estado = digitalRead(pin_mq);//Leemos el sensor
  if(mq_estado) //si la salida del sensor es 1
  {
    Serial.println("Sin presencia de alcohol");
  }
  else //si la salida del sensor es 0
  {
    Serial.println("Alcohol detectado");
  }
  delay(100); 
}
