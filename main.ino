const int knobPin = 3;
const int triggerPin = 2; 
const int outPin = 0;      
const int tranPin = 1;  


int knobValue = 0;
int triggerValue = 0; 


void setup() {
  pinMode(outPin, OUTPUT);  
  pinMode(tranPin, OUTPUT);
}


void loop() {
  
  triggerValue = analogRead(triggerPin); 
    
  if (triggerValue < 465) {
    
    knobValue = analogRead(knobPin); 
    
    if(knobValue > 970) {
      analogWrite(tranPin, triggerValue * 0.30);
    }  


    else {
      
      analogWrite(outPin, 0); 
      delay(40);
      analogWrite(outPin, 255); 
    
      triggerValue = analogRead(triggerPin); 
        if (triggerValue < 1) {
           knobValue = 0; 
        }
        delay(knobValue/5); 
        
        triggerValue = analogRead(triggerPin); 
        if (triggerValue < 1) {
           knobValue = 0; 
        }
        delay(knobValue/5); 
        
        triggerValue = analogRead(triggerPin); 
        if (triggerValue < 1) {
           knobValue = 0; 
        }
        delay(knobValue/5); 
        
        triggerValue = analogRead(triggerPin); 
        if (triggerValue < 1) {
           knobValue = 0; 
        }
        delay(knobValue/5); 
      
        triggerValue = analogRead(triggerPin); 
        if (triggerValue < 1) {
           knobValue = 0; 
        }
        delay(knobValue/5); 
    }
  }

  else {
    analogWrite(outPin, 255);
    analogWrite(tranPin, 165);
  }

}