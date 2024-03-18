#include <Servo.h>
int Pir = 8;
int statusPir = 0;
Servo myservo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Pintu Pintar Brow");
  myservo.attach(6);
  pinMode(Pir, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  statusPir = digitalRead(Pir);
  if(statusPir == HIGH){
    myservo.write(45);  // Turn Servo ke kiri 45 degrees
    delay(1000);          
    myservo.write(0);   // Turn Servo ke kiri to 0 degrees
    delay(1000);          
    myservo.write(90);  // Turn Servo ke posisi center position (90 degrees)
    delay(1000); 
    Serial.println("Pintu Terbuka");
  }else {
    myservo.write(135); // Turn Servo Ke kanan 135 degrees
    delay(1000);          
    myservo.write(180); // Turn Servo ke kanan 180 degrees
    delay(1000);          
    myservo.write(90);  // Turn Servo ke posisi center position (90 degrees)
    delay(1000);
    Serial.println("Pintu Tertutup");
  }
  delay(1000);
}