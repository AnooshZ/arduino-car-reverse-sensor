int trig = 10;
int echo = 11;
int buzzer = 9;

long duration;
float distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);
  if(duration ==0){
    noTone(buzzer);
    delay(60);
    return;
  }

  distance = duration*0.01715; // 1000000ns * 343m/s / 2 * 100cm = 0.01715cm
  int dcm = (int)(distance + 0.5);

  if(dcm<=10 && dcm>7){
    tone(buzzer, 400);
    delay(500);
    noTone(buzzer);
    delay(500);
  }

  if(dcm<=7 && dcm>3){
    tone(buzzer, 400);
    delay(250);
    noTone(buzzer);
    delay(250);
  }

  else if(dcm<=3){
    tone(buzzer, 400);
  }

  else{
    noTone(buzzer);
  }

  delay(60);

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("cm");

}
