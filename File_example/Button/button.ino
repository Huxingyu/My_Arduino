const int buttonpin=2;
const int ledpin=13;

int buttonstate=0;

void setup(){
    pinMode(buttonpin,INPUT);
    pinMode(ledpin,OUTPUT);
}

void loop(){
    buttonstate=digitalRead(buttonpin);
    if(buttonstate==1){
        digitalWrite(ledpin,HIGH);
    }
    else{
        digitalWrite(ledpin,LOW);
    }
}