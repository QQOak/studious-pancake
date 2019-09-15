#include "Arduino.h"
#include "Wheel.h"

Wheel::Wheel(unsigned int diameter, unsigned int driveAngle, unsigned int freeAngle)
  : diameter(diameter % 360), driveAngle(driveAngle % 360), freeAngle(freeAngle % 360)
{
  
}
