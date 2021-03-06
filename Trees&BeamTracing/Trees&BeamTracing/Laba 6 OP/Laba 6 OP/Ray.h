#pragma once
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

struct Point 
{
    float x, y, z;
    Point(float x = 0, float y = 0, float z = 0) : x(x), y(y), z(z) {};
    float& operator[](int index) 
    {
        switch (index)
        {
        case 0:
            return x;
        case 1:
            return y;
        case 2:
            return z;
        default:
            return x;
        }
    }
};

class Ray
{
public:
    Point stPoint;
    Point directionVector;
    Ray(float source_x, float source_y, float source_z, float inter_x, float inter_y, float inter_z);
};