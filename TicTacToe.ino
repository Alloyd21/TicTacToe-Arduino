/*
 
  created 2019
  by Adam Lloyd
  
*/

#include <RGBLED.h>

RGBLED rgbLed1(22,23,24,COMMON_ANODE);
RGBLED rgbLed2(25,26,27,COMMON_ANODE);
RGBLED rgbLed3(28,29,30,COMMON_ANODE);
RGBLED rgbLed4(31,32,33,COMMON_ANODE);
RGBLED rgbLed5(34,35,36,COMMON_ANODE);
RGBLED rgbLed6(37,38,39,COMMON_ANODE);
RGBLED rgbLed7(40,41,42,COMMON_ANODE);
RGBLED rgbLed8(43,44,45,COMMON_ANODE);
RGBLED rgbLed9(46,47,48,COMMON_ANODE);
int SensorPin1= 0;
int SensorPin2= 1;
int SensorPin3= 2;
int SensorPin4= 3;
int SensorPin5= 4;
int SensorPin6= 5;
int SensorPin7= 6;
int SensorPin8= 7;
int SensorPin9= 8;

int raw1= 0;
int raw2= 0;
int raw3= 0;
int raw4= 0;
int raw5= 0;
int raw6= 0;
int raw7= 0;
int raw8= 0;
int raw9= 0;

int Vin1= 5;
int Vin2= 5;
int Vin3= 5;
int Vin4= 5;
int Vin5= 5;
int Vin6= 5;
int Vin7= 5;
int Vin8= 5;
int Vin9= 5;

float Vout1= 0;
float Vout2= 0;
float Vout3= 0;
float Vout4= 0;
float Vout5= 0;
float Vout6= 0;
float Vout7= 0;
float Vout8= 0;
float Vout9= 0;

float R1= 150;   //Resistor Value
float R2= 0;     //Player Resistor Int
float buffer= 0;

void setup() {
  Serial.begin(9600);
  pinMode(SensorPin1, INPUT);
  pinMode(SensorPin2, INPUT);  
  pinMode(SensorPin3, INPUT);  
  pinMode(SensorPin4, INPUT);  
  pinMode(SensorPin5, INPUT);  
  pinMode(SensorPin6, INPUT);  
  pinMode(SensorPin7, INPUT);  
  pinMode(SensorPin8, INPUT);  
  pinMode(SensorPin9, INPUT);
}


void loop()
{
//Square 1 
raw1= analogRead(SensorPin1);
buffer= raw1 * Vin1;
Vout1= (buffer)/1024.0;
Serial.print("Square1: ");
Serial.println(Vout1);
delay(200);
if(Vout1 > 3.00 )
{rgbLed1.writeRGB(0,0,255);}
else if (Vout1 > 1.50 && Vout1 < 2.90)
{rgbLed1.writeRGB(255,0,0);}
else 
{rgbLed1.writeRGB(0,0,0);}

//Square 2
raw1= analogRead(SensorPin2);
buffer= raw1 * Vin1;
Vout2= (buffer)/1024.0;
Serial.print("Square2: ");
Serial.println(Vout2);
delay(200);
if(Vout2 > 3.00 )
{rgbLed2.writeRGB(0,0,255);}
else if (Vout2 > 1.50 && Vout2 < 2.90)
{rgbLed2.writeRGB(255,0,0);}
else 
{rgbLed2.writeRGB(0,0,0);}

//Square 3
raw3= analogRead(SensorPin3);
buffer= raw3 * Vin3;
Vout3= (buffer)/1024.0;
Serial.print("Square3: ");
Serial.println(Vout3);
delay(200);
if(Vout3 > 3.00 )
{rgbLed3.writeRGB(0,0,255);}
else if (Vout1 > 1.50 && Vout1 < 2.90)
{rgbLed3.writeRGB(255,0,0);}
else 
{rgbLed3.writeRGB(0,0,0);}

//Square 4
raw4= analogRead(SensorPin4);
buffer= raw4 * Vin4;
Vout4= (buffer)/1024.0;
Serial.print("Square4: ");
Serial.println(Vout4);
delay(200);
if(Vout4 > 3.00 )
{rgbLed4.writeRGB(0,0,255);}
else if (Vout4 > 1.50 && Vout4 < 2.90)
{rgbLed4.writeRGB(255,0,0);}
else 
{rgbLed4.writeRGB(0,0,0);}





}
