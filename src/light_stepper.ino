
#include <Stepper.h>

const int stepsPerRevolution = 512;
Stepper mystepper(stepsPerRevolution,0,1,2,3);

void setup()
{
  mystepper.setSpeed(60);
  Serial.begin(9600);

}


void loop(){
  Serial.println("clockwise");
  mystepper.step(stepsPerRevolution);
  delay(500);
  Serial.println("counter-clockwise");
  mystepper.step(-(stepsPerRevolution));
  delay(500);
}
