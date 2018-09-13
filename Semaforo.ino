#define boton 2
#define led_V 3
#define led_R 4
#define led_A 5
#define led_VS 6
#define led_RS 7

boolean valor_led = LOW;
boolean valor_boton = LOW;



void setup() {
  pinMode (led_V, OUTPUT);
  pinMode (led_R, OUTPUT);
  pinMode (led_A, OUTPUT);
  pinMode (boton, INPUT);
  pinMode (led_VS, OUTPUT);
  pinMode (led_RS, OUTPUT);

}

void loop() {
  //valor_boton == digitalRead(boton);
  while(digitalRead(boton)==HIGH){
//  if(digitalRead(boton==LOW)){
    digitalWrite(led_VS, LOW);
    digitalWrite(led_R, LOW);
    digitalWrite(led_RS, HIGH);
    digitalWrite (led_V, HIGH);
    delay(10000);
     for(int i=0;i<3;i++){
      digitalWrite (led_V, HIGH);
      delay(1000);
      digitalWrite (led_V, LOW);
      delay(1000);
    }
    digitalWrite (led_A, HIGH);
    delay(10000);
     for(int i=0;i<3;i++){
      digitalWrite (led_A, HIGH);
      delay(1000);
      digitalWrite (led_A, LOW);
      delay(1000);
    }

    digitalWrite (led_R, HIGH);
    delay(10000);
    digitalWrite (led_R, LOW);
//  }
  }
  while(digitalRead(boton)==LOW){
    digitalWrite (led_RS, LOW);
    digitalWrite (led_R, HIGH);
    digitalWrite (led_VS, HIGH);
    }
}
