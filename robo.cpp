#include <Servo.h>

//constants
Servo FRServo,BKServo;
char forward[]={15,25,25,25,25,15,15,15};
void setup()
{
   FRServo.attach(3);
   BKServo.attach(5);
}

void loop ()
{
  for(int n = 0;n<4;n++)
  {
    FRServo.write(forward[2*n]);
    BKServo.write(forward[(2*n)+1]);
    delay(100);
    }
}