#define BUZZER 7 // PIN Number for Piezo Speaker is 7

void setup() {
pinMode(BUZZER, OUTPUT);
}

void loop() {
  for (int i = 0; i < 10 ; i = i + 1) {
  tone(BUZZER, 30, 100);
  delay(110);
  } 
  for (int i = 0; i < 15 ; i = i + 1) {
  tone(BUZZER, 30, 100);
  delay(40);
  }
  delay(700);
  tone(BUZZER, 750, 100);
  delay(5000);
}
