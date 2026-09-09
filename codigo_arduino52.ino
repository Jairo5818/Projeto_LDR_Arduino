int led = 13;
int ldr = A0;
int valor_ldr;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(ldr, INPUT);
  Serial.begin(9600);
}

void loop() {
  valor_ldr = analogRead(ldr);
  Serial.println(valor_ldr);

  if (valor_ldr > 1000) {
    digitalWrite(led, HIGH);
    delay(1000);
  } 
  else {
    digitalWrite(led, LOW);
    delay(1000);
  }
}
