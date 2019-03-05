void setup(){
    pinMode(13,HIGH);
    for(int i=2;i<8;i++){
        pinMode(i,OUTPUT);
    }
}

void loop(){
    digitalWrite(13,HIGH);
    delay(1000);
    digitalWrite(13,LOW);
    delay(1000);
    for(int i=2;i<7;i++){
        digitalWrite(i,HIGH);
        delay(1000);
        digitalWrite(i,LOW);
    }
    for(int i=7;i>2;i--){
        digitalWrite(i,HIGH);
        delay(1000);
        digitalWrite(i,HIGH);
    }
}

//有问题