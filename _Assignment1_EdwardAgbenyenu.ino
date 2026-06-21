
int startValue = 5;
int ledPin = 13;
void flashLED(int times) {
}
void setup() {
   pinMode(ledPin, OUTPUT);
   Serial.begin(9600);
   Serial.println("=== Smart Countdown Starting ===");
   int count = startValue;
  while (count >=1) {
      Serial.print("count:");
      Serial.println(count);
      flashLED(count); // blink the LED
      delay(1000);
      count = count - 1;
 }
   Serial.println("=== Countdown Complete ===");
}
void loop() { 
}