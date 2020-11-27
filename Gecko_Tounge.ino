// Craigs mods to Tongue V2. 27/11/2020

int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int h = 9;
int i = 10;
int j = 11;
int k = 12;
int l = 13;
int DelOut = 50;
int DelIn = 50;
int triggerInPin = A0;  // trigger In Pin, lets the Nano run.
int nanoBusyOutPin = A1;    // Nano I'm busy pin. Set HIGH to indicate Nano working.
int valInPin = LOW;



void setup() {
  // put your setup code here, to run once:
  

  // declare pins to be an output / input:
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(h, OUTPUT);
  pinMode(i, OUTPUT);
  pinMode(j, OUTPUT);
  pinMode(k, OUTPUT);
  pinMode(l, OUTPUT);

  Serial.begin(9600);
  Serial.println("Craigs Tongue v2 mods");
  Serial.println("Start setup");
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.print("LED_BULTIN = ");
  Serial.println( LED_BUILTIN );
  // initialise trigger pin.
  pinMode(triggerInPin, INPUT);
  digitalWrite(triggerInPin, LOW);    //
  // initialise Nano Busy pin.
  pinMode(nanoBusyOutPin, OUTPUT);
  digitalWrite(triggerInPin, LOW);    //

}


void loop() {
  // put your main code here, to run repeatedly:


  Serial.println("Starting Nano Main loop");
  Serial.print("InPin= ");
  Serial.println(digitalRead(triggerInPin));
  Serial.print("valInPin= ");
  Serial.println( valInPin );
  Serial.print("LOW = ");
  Serial.println( LOW );

  while ( digitalRead(triggerInPin) == LOW) {
    // nothing here, just wasting time.
    // valInPin = digitalRead(triggerInPin);
    Serial.println("In Nano while loop.");
  }

  // Set Nano Busy pin HIGH.
  Serial.println("Nano doing its thing! ...");
  digitalWrite( nanoBusyOutPin, HIGH);
  for ( int i = 0; i < 4; i++ ) {


    digitalWrite(a, HIGH);    // turn the LED off by making the voltage LOW
    delay (DelOut);                       // wait for a second
    digitalWrite(b, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(DelOut);                       // wait for a second
    digitalWrite(c, HIGH);    // turn the LED off by making the voltage LOW
    delay(DelOut);                       // wait for a second
    digitalWrite(d, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(DelOut);                       // wait for a second
    digitalWrite(e, HIGH);    // turn the LED off by making the voltage LOW
    delay(DelOut);                       // wait for a second
    digitalWrite(f, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(DelOut);                       // wait for a second
    digitalWrite(g, HIGH);    // turn the LED off by making the voltage LOW
    delay(DelOut);                       // wait for a second
    digitalWrite(h, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(DelOut);                       // wait for a second
    digitalWrite(i, HIGH);    // turn the LED off by making the voltage LOW
    delay(DelOut);                       // wait for a second
    digitalWrite(j, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(DelOut);                       // wait for a second
    digitalWrite(k, HIGH);    // turn the LED off by making the voltage LOW
    delay(DelOut);                       // wait for a second
    digitalWrite(l, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(30);
    digitalWrite(l, LOW);
    delay(30);                       // wait for a second
    digitalWrite(l, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(30);
    digitalWrite(l, LOW);
    delay(400);                       // wait for a second



    digitalWrite(l, LOW);    // turn the LED off by making the voltage LOW
    delay(DelIn);                       // wait for a second
    digitalWrite(k, LOW);   // turn the LED on (HIGH is the voltage level)
    delay(DelIn);                       // wait for a second
    digitalWrite(j, LOW);    // turn the LED off by making the voltage LOW
    delay(DelIn);                       // wait for a second
    digitalWrite(i, LOW);   // turn the LED on (HIGH is the voltage level)
    delay(DelIn);                       // wait for a second
    digitalWrite(h, LOW);    // turn the LED off by making the voltage LOW
    delay(DelIn);                       // wait for a second
    digitalWrite(g, LOW);   // turn the LED on (HIGH is the voltage level)
    delay(DelIn);                       // wait for a second
    digitalWrite(f, LOW);    // turn the LED off by making the voltage LOW
    delay(DelIn);                       // wait for a second
    digitalWrite(e, LOW);   // turn the LED on (HIGH is the voltage level)
    delay(DelIn);                       // wait for a second
    digitalWrite(d, LOW);    // turn the LED off by making the voltage LOW
    delay(DelIn);                       // wait for a second
    digitalWrite(c, LOW);   // turn the LED on (HIGH is the voltage level)
    delay(DelIn);                       // wait for a second
    digitalWrite(b, LOW);    // turn the LED off by making the voltage LOW
    delay(DelIn);                       // wait for a second
    digitalWrite(a, LOW);   // turn the LED on (HIGH is the voltage level)
    delay(DelIn);                       // wait for a second


    digitalWrite(a, HIGH);    // turn the LED off by making the voltage LOW
    delay (DelOut);                       // wait for a second
    digitalWrite(b, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(DelOut);                       // wait for a second
    digitalWrite(c, HIGH);    // turn the LED off by making the voltage LOW
    delay(DelOut);                       // wait for a second
    digitalWrite(d, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(DelOut);                       // wait for a second
    digitalWrite(e, HIGH);    // turn the LED off by making the voltage LOW
    delay(DelOut);                       // wait for a second
    digitalWrite(f, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(DelOut);                       // wait for a second
    digitalWrite(g, HIGH);    // turn the LED off by making the voltage LOW
    delay(DelOut);                       // wait for a second
    digitalWrite(h, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(DelOut);                       // wait for a second
    digitalWrite(i, HIGH);    // turn the LED off by making the voltage LOW
    delay(DelOut);                       // wait for a second
    digitalWrite(j, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(DelOut);                       // wait for a second
    digitalWrite(k, HIGH);    // turn the LED off by making the voltage LOW
    delay(DelOut);                       // wait for a second
    digitalWrite(l, HIGH);   // turn the LED on (HIGH is the voltage level)



    digitalWrite(l, LOW);    // turn the LED off by making the voltage LOW
    delay(DelIn);                       // wait for a second
    digitalWrite(k, LOW);   // turn the LED on (HIGH is the voltage level)
    delay(DelIn);                       // wait for a second
    digitalWrite(j, LOW);    // turn the LED off by making the voltage LOW
    delay(DelIn);                       // wait for a second
    digitalWrite(i, LOW);   // turn the LED on (HIGH is the voltage level)
    delay(DelIn);                       // wait for a second
    digitalWrite(h, LOW);    // turn the LED off by making the voltage LOW
    delay(DelIn);                       // wait for a second
    digitalWrite(g, LOW);   // turn the LED on (HIGH is the voltage level)
    delay(DelIn);                       // wait for a second
    digitalWrite(f, LOW);    // turn the LED off by making the voltage LOW
    delay(DelIn);                       // wait for a second
    digitalWrite(e, LOW);   // turn the LED on (HIGH is the voltage level)
    delay(DelIn);                       // wait for a second
    digitalWrite(d, LOW);    // turn the LED off by making the voltage LOW
    delay(DelIn);                       // wait for a second
    digitalWrite(c, LOW);   // turn the LED on (HIGH is the voltage level)
    delay(DelIn);                       // wait for a second
    digitalWrite(b, LOW);    // turn the LED off by making the voltage LOW
    delay(DelIn);                       // wait for a second
    digitalWrite(a, LOW);   // turn the LED on (HIGH is the voltage level)
    delay(DelIn);

    Serial.print(" i = ");
    Serial.println( i );
    delay(10000);   // want to see Gecko wait
  }

  delay(10000);   // want to see Gecko wait
  delay(2000);
  Serial.println("Nano finished.");
  valInPin = LOW;
  digitalWrite( nanoBusyOutPin, LOW);
  delay(2000);



}
