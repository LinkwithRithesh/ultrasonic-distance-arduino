
int trigPin=10;
int echoPin=8;
long time;
int distance;

void setup()
{
  pinMode(10, OUTPUT);
    pinMode(8, INPUT);
    Serial.begin(9600);
}

void loop()
{
  digitalWrite(10, LOW);
  delay(0);
  digitalWrite(10, HIGH);
  delay(0);
  digitalWrite(10, LOW);
  
  time = pulseIn(8, HIGH);
  distance=time*0.034/2
  Serial.println("Distance: " + String(distance));
}