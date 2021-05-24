#include "Ray.h"

Ray::Ray(int x0, int y0, int z0, int a, int b, int c) 
{
    stPoint.push_back(x0);
    stPoint.push_back(y0);
    stPoint.push_back(z0);
    directionVector.push_back(a);
    directionVector.push_back(b);
    directionVector.push_back(c);
}