int analogPin = A0;
int groundPin = 13;  
int value = 0; 
int thressholdLevel = 12; //from monitor when the feedback is off.   

void setup() 
{   // put your setup code here, to run once:   
  analogReference(INTERNAL);   
  Serial.begin(9600);   
  pinMode(groundPin, OUTPUT); 
}  

void loop() 
{ //if microphone feedback is off some noise is present.     // put your main code here, to run repeatedly:   
  value = analogRead(analogPin);   
  if(value <= thressholdLevel)   
  {
    Serial.println(0);    
    digitalWrite(groundPin,LOW); 
  } 
  else
  {
    Serial.println(value); 
    digitalWrite(groundPin,HIGH);
  }
}
