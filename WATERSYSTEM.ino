#include <Arduino.h>

int moistureValue; //random variable 
int moisturePin = A0;
void setup() {
  pinMode(3,OUTPUT); //output pin for relay board, this will sent signal to the relay
  Serial.begin(9600);
}

void loop() { 
  moistureValue = analogRead(moisturePin);  // reading the coming signal from the soil sensor
  Serial.print("Moister Reading: ");
  Serial.println(moistureValue);
  if(moistureValue <= 500) // if water level is full then cut the relay 
  {
  digitalWrite(3,LOW); // low is to cut the relay
  Serial.print("Pump is OFF \n");
  }
  else
  {
  digitalWrite(3,HIGH); //high to continue proving signal and water supply
  Serial.print("Pump is ON \n");
  }
  delay(400); 
}