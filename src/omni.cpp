#include "omni.h"
#include <math.h>

Omni::Omni(double position) {
    this->xPower = cos(position);
    this->yPower = sin(position);
}

double Omni::power(int x, int y) {
    double omuniPower = this->xPower*x + this->yPower*y;
    return omuniPower;
}
