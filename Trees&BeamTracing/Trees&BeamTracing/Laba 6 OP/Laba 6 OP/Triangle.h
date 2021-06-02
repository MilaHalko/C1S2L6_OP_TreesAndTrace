#pragma once
#include <stdio.h>
#include <iostream>
#include <vector>
#include "geometry.h"
using namespace std;

class Triangle 
{
    Point point1, point2, point3; //0-���������� �, 1-�, 2-z
    float color;
public:
    Triangle(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, float cosAlpha);
    float getColor();
    float getMax(int numCoor);
    float getMin(int numCoor);
    int intersect_triangle(Ray ray);
};