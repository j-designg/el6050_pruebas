int state   = 0;
int LED_0   = 2;
int LED_1   = 3;


void setup(){
  pinMode(LED_0, OUTPUT);
  pinMode(LED_1, OUTPUT);

  state = 1;
}

void loop(){

  switch (state){
    case 1:
      digitalWrite(LED_0, LOW);
      digitalWrite(LED_1, LOW);

      state = 2;
    break;

    case 2:
      digitalWrite(LED_0, HIGH);
      digitalWrite(LED_1, LOW);
      state = 3;
    break;

    case 3:
      digitalWrite(LED_0, LOW);
      digitalWrite(LED_1, HIGH);
      state = 4;
    break;

    case 4:
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      state = 1;
    break;
  }

  delay(1000);
}
