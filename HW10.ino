long LedTimer[6];

// Set up LED pins as outputs
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

  //led start times
  for (int i = 0; i < 6; i++) {
    LedTimer[i] = millis();
  }
}

void loop() {
  long currentTime = millis();

  if ((currentTime - LedTimer[0]) >= 10000 && (currentTime - LedTimer[0]) <= 60000) {
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);
  }

  if ((currentTime - LedTimer[1]) >= 20000 && (currentTime - LedTimer[1]) <= 60000) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }

  if ((currentTime - LedTimer[2]) >= 30000 && (currentTime - LedTimer[2]) <= 60000) {
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, LOW);
  }

  if ((currentTime - LedTimer[3]) >= 40000 && (currentTime - LedTimer[3]) <= 60000) {
    digitalWrite(5, HIGH);
  } else {
    digitalWrite(5, LOW);
  }

  if ((currentTime - LedTimer[4]) >= 50000 && (currentTime - LedTimer[4]) <= 60000) {
    digitalWrite(6, HIGH);
  } else {
    digitalWrite(6, LOW);
  }

  if ((currentTime - LedTimer[5]) >= 60000 && (currentTime - LedTimer[5]) <= 60000) {
    digitalWrite(7, HIGH);
  } else {
    digitalWrite(7, LOW);
  }

// is the elapsed time more than 60 seconds?
  if ((currentTime - LedTimer[0]) >= 60001) {
    for (int i = 0; i < 6; i++) {
      // if so, reset the led timer
      LedTimer[i] = currentTime;
    }
  }
}
