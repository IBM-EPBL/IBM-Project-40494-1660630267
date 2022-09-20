// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(4, INPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  double data=analogRead(A3);
  double n = data/1024;
  double volt = n*5;
  double off = volt-0.5;
  double temperature = off * 100;
  
  if(temperature > 60){
    Serial.print("Temperature is above 60C : ");
    Serial.print(temperature);
    Serial.print("C");
    
    
    tone(12,1800,100);
    delay(1000);
    tone(12,1800,1000);
    delay(100);
    
  }
  else{
    Serial.print("Temperature is above 60C : ");
    Serial.print(temperature);
    Serial.print("C");
    Serial.print("\n\n");
    
    noTone(12);
  }
  
  
  //for PIR
  int motion = digitalRead(4);
  Serial.print("Position is: ");
  Serial.print(motion);
  
  if(motion == 1){
    Serial.println("Motion Detected");
    
    tone(12,1800,100);
    delay(1000);
    tone(12,1800,1000);
    delay(100);
  }
  else{
    Serial.println("No Motion");
    noTone(12);
  }
}