#ifndef DriveTrain_h
#define DriveTrain_h

#include "Arduino.h"
#include "Wheel.h"

class DriveTrain
{
  public:
    DriveTrain(Wheel wheel, unsigned int driveAngle, unsigned int freeAngle);

  private:
    Wheel wheel;
    unsigned int wheelAngel;
    unsigned int radius;
  
};

#endif
