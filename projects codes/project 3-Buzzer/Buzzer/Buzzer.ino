#define trigPin 12
#define echoPin 11
#define LEDlampRed 7
#define soundbuzzer 3
int sound = 500;


void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(LEDlampRed, OUTPUT);
  pinMode(soundbuzzer, OUTPUT);
}
void loop() {
  long durationindigit, distanceincm;
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  durationindigit = pulseIn(echoPin, HIGH);
  distanceincm = (durationindigit/5) / 29.1;
 

 
  if (distanceincm < 5){
    digitalWrite(LEDlampRed, HIGH);
   digitalWrite(soundbuzzer, HIGH); 
  }
  else {
   digitalWrite(LEDlampRed, LOW);
   digitalWrite(soundbuzzer, LOW); 
  }
  
  delay(300);
}
