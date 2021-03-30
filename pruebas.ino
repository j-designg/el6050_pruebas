int state = 0;

void setup(){
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);

  state = 1;
}

void loop(){

  switch (state){
    case 1:
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);

      state = 2;
    break;

    case 2:
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      state = 3;
    break;

    case 3:
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
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
