#define Button 8
#define Led 10


void setup() {

  pinMode(Button,INPUT);
  pinMode(Led,OUTPUT);
  
}

void loop() {


  if(digitalRead(Button)==1)
  {
    digitalWrite(Led,HIGH);
  }
  else{
    digitalWrite(Led,LOW);
  }

}
