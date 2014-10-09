/*
  Button
 
 Turns on and off a light emitting diode(LED) connected to digital  
 pin 13, when pressing a pushbutton attached to pin 2. 
 
 
 The circuit:
 * LED attached from pin 13 to ground 
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground
 
 * Note: on most Arduinos there is already an LED on the board
 attached to pin 13.
 
 
 created 2005
 by DojoDave <http://www.0j0.org>
 modified 30 Aug 2011
 by Tom Igoe
 
 This example code is in the public domain.
 
 http://www.arduino.cc/en/Tutorial/Button
 */

// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = 8;     // the number of the pushbutton pin
const int buttonPin2 = 12;
const int ledPin =  9;      // the number of the LED pin
const int led2 = 10; 


// variables will change:
int buttonState = 0;    // variable for reading the pushbutton status
int buttonState2 = 0; 

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);     
}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  buttonState2 = digitalRead(buttonPin2);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == 1) {     
    // turn LED on:    
    // digitalWrite(ledPin, HIGH);
    analogWrite(ledPin, 255);  
    delay(80);
    analogWrite(ledPin, 0);
    delay(80);
    analogWrite(ledPin, 255);
    delay(80);
    analogWrite(ledPin, 0);  
    delay(40);
    analogWrite(ledPin, 255);
    delay(40);
    analogWrite(ledPin, 0);

    delay(100);

    analogWrite(ledPin, 255);
    delay(3000);

    for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) { 
      // sets the value (range from 0 to 255):
      analogWrite(ledPin, fadeValue);         
      // wait for 30 milliseconds to see the dimming effect    
      delay(30);                            
    }
  } 


  if (buttonState2 == 1) {     
    // turn LED on:    
    digitalWrite(led2, HIGH); 
  } else {
    // turn LED off:
    digitalWrite(led2, LOW); 
  }
}

