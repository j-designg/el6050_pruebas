int state   = 0;
int LED_0   = 2;
int LED_1   = 3;
int LED_2   = 4;
int LED_3   = 5;


void setup(){
  pinMode(LED_2, INPUT);
  pinMode(LED_3, INPUT);


  state = 9;
}

void loop(){

    /* Aqui empieza la interfaz de usuario
    */

  switch (state){
    case 1:
      digitalWrite(LED_2, LOW);
      digitalWrite(LED_3, LOW);

      state = 2;
    break;

    case 2:
      digitalWrite(LED_2, HIGH);
      digitalWrite(LED_3, LOW);
      state = 3;
    break;

    case 3:
      digitalWrite(LED_2, LOW);
      digitalWrite(LED_3, HIGH);
      state = 4;
    break;
  }
  /* Aqui termina la interfaz de usuario
    */

  delay(1000);
}
