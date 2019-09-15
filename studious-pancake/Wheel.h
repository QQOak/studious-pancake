#ifndef Wheel_h
#define Wheel_h

#include "Arduino.h"

class Wheel
{
  public:
    Wheel(unsigned int diameter, unsigned int driveAngle, unsigned int freeAngle);

  private:
    unsigned int diameter;
    unsigned int driveAngle;
    unsigned int freeAngle;
  
};

#endif
