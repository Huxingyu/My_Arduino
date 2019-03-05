void setup(){           //初始化程序
    pinMode(13,OUTPUT);
}

void loop(){            //死循环
    digitalWrite(13,HIGH);
    delay(1000);
    digitalWrite(13,LOW);
    dealy(1000);
}