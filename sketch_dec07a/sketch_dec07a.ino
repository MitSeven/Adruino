int val;
int led=13;
void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    while(Serial.available()){
      val=Serial.read();
      Serial.println(val);
      delay(200);
    }
    if(val=='1'){
      digitalWrite(led,LOW);
    }
    else if (val=='2'){
      digitalWrite(led,HIGH);
    }
}
