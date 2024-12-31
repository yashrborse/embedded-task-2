long int ac = 2;
long int bulb = 3;
long int heater = 4;
long int fan = 5;
char x;

void setup() {
  pinMode(ac, OUTPUT);
  pinMode(bulb, OUTPUT);
  pinMode(heater, OUTPUT);
  pinMode(fan, OUTPUT);
  digitalWrite(ac, LOW);
  digitalWrite(bulb, LOW);
  digitalWrite(heater, LOW);
  digitalWrite(fan, LOW);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    x = Serial.read();
  }
  switch (x) {
    case 'a':
      digitalWrite(ac, HIGH);
      break;
    case 'b':
      digitalWrite(ac, LOW);
      break;
    case 'c':
      digitalWrite(bulb, HIGH);
      break;
    case 'd':
      digitalWrite(bulb, LOW);
      break;
    case 'e':
      digitalWrite(heater, HIGH);
      break;
    case 'f':
      digitalWrite(heater, LOW);
      break;
    case 'g':
      digitalWrite(fan, HIGH);
      break;
    case 'h':
      digitalWrite(fan, LOW);
      break;
  }
}
