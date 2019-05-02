#include<AFMotor.h>
AF_DCMotor motorGrip(3);
char data;

void setup()
{ 
  Serial.begin(9600);
  Serial.println("Hello World!");

  motorGrip.setSpeed(200);
  motorGrip.run(RELEASE);
}
void loop()
{
  while (Serial.available())
  { 
    data = Serial.read();
    Serial.println(data);
    if (data == '0')
    {
      motorGrip.run(FORWARD);
      delay(700);
      motorGrip.run(RELEASE);
      delay(500);
    }    
    else if (data == '1')
    {
      motorGrip.run(BACKWARD);
      delay(700);
      motorGrip.run(RELEASE);
      delay(500);
    }
  }
}
