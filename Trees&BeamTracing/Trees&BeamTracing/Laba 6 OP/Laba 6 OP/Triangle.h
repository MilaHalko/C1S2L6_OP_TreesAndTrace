#pragma once

#include <iostream>
#include <vector>
#include "Ray.h"
using namespace std;

class Triangle
{
    vector<int> point1;
    vector<int> point2;
    vector<int> point3;
    float color;
    bool isIn2dTriangle(vector<vector<int>> trianglePoints, vector<int> findPoint);
public:
    Triangle(int x1, int y1, int z1, int x2, int y2, int z2, int x3, int y3, int z3, float cosAlpha);

    float getColor();

    int getMax(int numCoor);

    int getMin(int numCoor);

    bool isInTriangle(Ray ray);
};