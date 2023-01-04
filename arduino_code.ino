#include<cvzone.h>

SerialData serialData(2,1);
int valsRec[2];

void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  serialData.begin();
}

void loop() {
  serialData.Get(valsRec);
  digitalWrite(13,valsRec[0]);//green led
  digitalWrite(12,valsRec[1]);//red led
  delay(10);

}
