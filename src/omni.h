#ifndef _Omni_HEAD_
#define _Omni_HEAD_

#if ARDUINO >= 100
    #include "Arduino.h"
#else
    #include "WProgram.h"
#endif

#include <math.h>

class Omni {
    public:
        Omni(double position);
        double power(int x, int y);
    private:
        double xPower;
        double yPower;
};

#endif
