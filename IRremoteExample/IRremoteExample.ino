#include<IRremote.h>

int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;
boolean LedStatus = true;
int LEDPin = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  irrecv.enableIRIn(); //Start the receiver
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(irrecv.decode(&results)) {
      Serial.println(results.value, HEX);
      
      if(results.value == 0x718E609F) {
        
          if(LedStatus == true) {
          
            digitalWrite(LEDPin, HIGH);
            Serial.println("LED is ON");
            LedStatus = false;
            
          }else{
          
              digitalWrite(LEDPin, LOW);
              Serial.println("LED is OFF");
              LedStatus = true;
            }
        }
      irrecv.resume(); //Recieve the next value
    } 
}
