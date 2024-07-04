#include <Arduino.h>
#include <DHT.h>
#include <DHT_U.h>

// Setting up DHT sensor
int sensorPin = 2;
DHT HT(sensorPin, DHT11);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  HT.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  float humidity = HT.readHumidity();
  Serial.println((String)"Humidity: " + humidity);

  float tempC = HT.readTemperature();
  Serial.println((String)"Temperature in Celsius: " + tempC);

  float tempF = (tempC * 1.8) + 32;
  Serial.println((String)"Temperature in Fahrenheit: " + tempF);

  float tempK = tempC + 273.15;
  Serial.println((String)"Temperature in Kelvin: " + tempK);

  delay(1000);
}