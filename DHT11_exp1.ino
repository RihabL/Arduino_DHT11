#include <dht.h>

dht DHT;

#define dhtpin 5

void setup(){
  Serial.begin(9600);
}

void loop(){
  int chk = DHT.read11(dhtpin);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  delay(1000);
}
