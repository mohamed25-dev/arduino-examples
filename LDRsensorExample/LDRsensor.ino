//LED will be connected to pin 11;
const int LEDpin = 11; 

//The value that wil be assigned to the LED;
int LEDvalue;  
// The value read by the sensor;
int sensorValue; 

void setup() {  
  
    //Start Serial Communication with the computer
    Serial.begin(9600);   
    //Setting the LED pin as output;
    pinMode(LEDpin, OUTPUT); 
  }
  
  void loop() {
    
    //read the value at the sensor pin
    sensorValue = analogRead(A0);  
    //mapping the value from the sensor to be valid
    LEDvalue = map(sensorValue, 0, 1023, 0, 255); 
    //Writing the value to the LED  
    analogWrite(LEDpin, LEDvalue);
    //printing the value to the screen
    Serial.print(sensorValue); 
     
    delay(100);
}

