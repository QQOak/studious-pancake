#include "Arduino.h"
#include "Wheel.h"

Wheel::Wheel(unsigned int diameter, unsigned int driveAngle, unsigned int freeAngle)
  : Diameter(diameter % 360), DriveAngle(driveAngle % 360), FreeAngle(freeAngle % 360)
{
  
}
