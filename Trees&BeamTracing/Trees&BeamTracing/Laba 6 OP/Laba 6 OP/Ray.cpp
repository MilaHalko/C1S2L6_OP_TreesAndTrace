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

vector<int> Ray::pointInZ(int z)
{
    vector<int> res;
    res.push_back(((z - stPoint[2]) * directionVector[0] / directionVector[2]) + stPoint[0]);
    res.push_back(((z - stPoint[2]) * directionVector[1] / directionVector[2]) + stPoint[1]);
    return res;
}