#define RAIN_AO A0
#define RAIN_DO 2
#define BUZZER 8
#define LED_PIN 7

void setup() {
  pinMode(RAIN_DO, INPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  bool raining = (digitalRead(RAIN_DO) == LOW); // most boards pull LOW when wet
  int intensity = analogRead(RAIN_AO);

  digitalWrite(BUZZER, raining);
  digitalWrite(LED_PIN, raining);

  Serial.print("Raining: "); Serial.print(raining ? "YES" : "no");
  Serial.print("  Intensity(raw): "); Serial.println(intensity);

  delay(500);
}
