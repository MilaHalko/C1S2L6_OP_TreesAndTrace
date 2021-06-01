#pragma once
#include <iostream>
#include <vector>
#include <math.h>
#include "Ray.h"

using namespace std;

class Geometry 
{
    float x1, y1, z1, x2, y2, z2, x3, y3, z3;
    float lightPointX = 5, lightPointY = 5, lightPointZ = 5;
    Point vectorCoordinates[2];
    Point res;

    void getNormalVector();

    void getVectorToLightPoint();

    float vectorModule(Point);

    void findInternalDotCoordinates();

public:
    Geometry(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, float lightPointX, float lightPointY, float lightPointZ);
    float getCos();

};