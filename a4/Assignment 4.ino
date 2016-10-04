const int buttonPin = 3;    // pin to read button
const int oddLED = 9;       // LED lit on odd button presses
const int evenLED = 10;     // LED lit on even button presses
int buttonState =0;
int pressCnt = 0;           // total # of button presses

void setup()
{

  pinMode(buttonPin, INPUT);

}

void loop()
{
  // if button is pressed
  if( digitalRead(buttonPin) ) {
    
    // increment count
    pressCnt++;
    
    // turn on even or odd LED
    digitalWrite(oddLED, pressCnt % 2);
    digitalWrite(evenLED, !(pressCnt % 2));
    
    // debounce
    delay(1000);
  }

if (buttonState == HIGH)

{
digitalWrite(oddLED, LOW);
    digitalWrite(evenLED, LOW);
}

}

