#define kirmizi_led 8
#define mavi_led 9

void setup() { 

  pinMode(kirmizi_led,OUTPUT);
  pinMode(mavi_led,OUTPUT);

}

void loop() {
  
  digitalWrite(kirmizi_led,LOW);
  digitalWrite(mavi_led,HIGH);
  delay(500);
  digitalWrite(mavi_led,LOW);
  digitalWrite(kirmizi_led,HIGH);
  delay(500);
  
}
