// Craigs mods to V2. 27/11/2020


int w = 3; // pin 3 PWM output
int r = 9; // pin 9 PWM output
int g = 10; // pin 10 PWM output
int b = 11; // pin 11 PWM output
int c = 5; // pin 5 PWM output
int fadeValue = 5;    // how bright the LED is
int fadeAmount = 20;    // how many points to fade the LED by
int minDelay = 3000; // minium delay at end of loop
int maxDelay = 10000; // maxium delay at end of loop
int triggerPin = A0;      // Nano waits for signal from this pin.
int nanoBusyPin = A1;     // Input, Nano sets this pin LOW when not busy.





void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Craigs v2 mods");
  Serial.println("Running Setup");
  Serial.print("LED_BULTIN = ");
  Serial.println( LED_BUILTIN );
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  // initialise triggerPin as an output.
  pinMode(triggerPin, OUTPUT);
  digitalWrite(triggerPin, LOW);   // force it low to start.
  // initialise nanoBusyPin as an INPUT.
  pinMode(nanoBusyPin, INPUT);
  digitalWrite(triggerPin, LOW);   // force it low to start.  This is probably redundant.
 
  // declare pins to be an output:
  pinMode(w, OUTPUT); // white output
  pinMode(r, OUTPUT); // red output
  pinMode(g, OUTPUT); // green output
  pinMode(b, OUTPUT); // blue output
  pinMode(c, OUTPUT); // chaser output
  // pinMode(A, INPUT); // chaser input
}


void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("In main loop.");
  digitalWrite(LED_BUILTIN, HIGH);
  // set the fade value of pins:
  // analogWrite(w, fadeValue);
  // analogWrite(r, fadeValue);
  // analogWrite(g, fadeValue);
  analogWrite(b, fadeValue);




  digitalWrite(b, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(w, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(w, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second
  digitalWrite(w, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(w, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second
  digitalWrite(w, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(w, LOW);    // turn the LED off by making the voltage LOW
  delay(400);                       // wait for a second
  digitalWrite(w, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(w, LOW);    // turn the LED off by making the voltage LOW
  delay(300);                       // wait for a second
  digitalWrite(w, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(w, LOW);    // turn the LED off by making the voltage LOW
  delay(200);                       // wait for a second
  digitalWrite(w, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(w, LOW);    // turn the LED off by making the voltage LOW

  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(b, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(b, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(b, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(b, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(b, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  digitalWrite(w, HIGH);   // turn the LED on (HIGH is the voltage level)

  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(b, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(b, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  digitalWrite(b, HIGH);   // turn the LED on (HIGH is the voltage level)
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(r, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(g, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  digitalWrite(LED_BUILTIN, LOW);


for ( int i = 0; i < 4; i++ ) {
                      // wait for a second
  }

  // CRAIG does it really need to wait here. If Nano is running its stuff, it wont even
  //  detect the trigger pin. (is it buffered, I doubt it).
  // Wait for Nano not busy.
  
  while (  digitalRead(nanoBusyPin) == HIGH) {
    // nothing here, just wasting time.
    // valInPin = digitalRead(triggerInPin);
    Serial.println("In UNO while loop.");
  }
  
  
  // Trigger Nano
  Serial.print("Trigger Nano Pin: ");
  digitalWrite(triggerPin, HIGH);
  Serial.println(digitalRead(triggerPin));
  delay(500);   // just to make sure Nano has had time to read triggerPin.
  digitalWrite(triggerPin, LOW);








  digitalWrite(w, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(w, LOW);
 



  analogWrite(g, fadeValue = 35);
  analogWrite(r, fadeValue = 35);
  digitalWrite(g, LOW);
  digitalWrite(r, LOW);
  analogWrite(b, fadeValue = 35);
  delay(1500);                       // wait for a second
  digitalWrite(b, LOW);    // turn the LED off by making the voltage LOW


  delay(random(minDelay, maxDelay));

}
