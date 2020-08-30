/****************************************************************************************
 Alcoholímetro 
 
  Para realizar lecturas precalibradas de un sensor MQ
 
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
  
 Desarrollado por Naylamp Mechatronics bajo licencia MIT (puede copiar, modificar, integrar o redistribuir)
 
 Última modificación el 29/08/2020

 Más información en:
   -https://naylampmechatronics.com/blog/42_Tutorial-sensores-de-gas-MQ2-MQ3-MQ7-y-MQ13.html
   -https://github.com/naylampmechatronics/Ejemplos_sensorMQ

**************************************************************************************************/
// definición del pin del sensor
int pin_mq = A0;

// definición del variables de la ecuación del gas Gas=const_a*(Rs/Ro)^pot_n
double const_a=0.4091;
double Ro=5463;
double pot_n=-1.497;

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  int adc_MQ = analogRead(pin_mq); //Lemos la salida analógica  del MQ
  float voltaje = adc_MQ * (5.0 / 1023.0); //Convertimos la lectura en un valor de voltaje
  float Rs=1000*((5-voltaje)/voltaje);  //Calculamos Rs con un RL de 1k
  double alcohol=const_a*pow(Rs/Ro,pot_n); // calculamos la concentración  de alcohol con la ecuación obtenida.
  //-------Enviamos los valores por el puerto serial------------
  Serial.print("adc:");
  Serial.print(adc_MQ);
  Serial.print("    voltaje:");
  Serial.print(voltaje);
  Serial.print("    Rs:");
  Serial.print(Rs);
  Serial.print("    alcohol:");
  Serial.print(alcohol);
  Serial.println("mg/L");
  delay(100);
}
