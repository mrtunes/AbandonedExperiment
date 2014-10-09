
const int buttonPin = 8;     
const int buttonPin2 = 12;
const int ledPin =  9;      
const int led2 = 10; 



int buttonState = 0;    
int buttonState2 = 0; 

void setup() {
 
  pinMode(ledPin, OUTPUT);
  pinMode(led2, OUTPUT);  

  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);  
}

void loop(){

  buttonState = digitalRead(buttonPin);
  buttonState2 = digitalRead(buttonPin2);


  if (buttonState == 1) {     
  
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
    delay(1000);

    for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) { 
      // sets the value (range from 0 to 255):
      analogWrite(ledPin, fadeValue);         
      // wait for 30 milliseconds to see the dimming effect    
      delay(30);                            
    }
  }

  if (buttonState2 == 1) {     
     
    digitalWrite(led2, HIGH);
   delay(20); 
    digitalWrite(led2, LOW);
    delay(20);
     digitalWrite(led2, HIGH);
   delay(20); 
    digitalWrite(led2, LOW);
    delay(20);
  } else {
  
    digitalWrite(led2, LOW); 
  }
}

// This code is adapted from the Arduino example files: Button and Fade 
// Fade:  Created 1 Nov 2008
// By David A. Mellis
// modified 30 Aug 2011
// By Tom Igoe

// Button: created 2005
// by DojoDave <http://www.0j0.org>
// modified 30 Aug 2011
// by Tom Igoe
