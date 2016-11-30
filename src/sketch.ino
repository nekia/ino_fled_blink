byte val;

void setup() {
    Serial.begin(9600);

    pinMode( 9,OUTPUT) ;     // 赤LED接続のピン(9番)をデジタル出力に設定
    pinMode(10,OUTPUT) ;     // 青LED接続のピン(10番)をデジタル出力に設定
    pinMode(11,OUTPUT) ;     // 緑LED接続のピン(11番)をデジタル出力に設定
    digitalWrite( 9,LOW) ;
    digitalWrite(10,LOW) ;
    digitalWrite(11,LOW) ;
}

void loop() {
    if(Serial.available() > 0){
    
        val = Serial.read();
        Serial.write(val);
        if(val == 'R'){
            digitalWrite( 9,HIGH) ;  // 赤LEDを点灯
            digitalWrite(10,LOW) ;
            digitalWrite(11,LOW) ;
        }

        if(val == 'G'){
            digitalWrite(11,HIGH) ;  // 緑LEDを点灯
            digitalWrite( 9,LOW) ;
            digitalWrite(10,LOW) ;
        }

        if(val == 'B'){
            digitalWrite(10,HIGH) ;  // 青LEDを点灯
            digitalWrite( 9,LOW) ;
            digitalWrite(11,LOW) ;
        }

        if(val == 'C'){
            digitalWrite( 9,LOW) ;
            digitalWrite(10,LOW) ;
            digitalWrite(11,LOW) ;
        }
        delay(300) ;
    }
}

