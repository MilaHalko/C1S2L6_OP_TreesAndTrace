#pragma once

#include <iostream>
#include <vector>
#include "Triangle.h"
using namespace std;

class Area 
{
    vector<int> pointMax;
    vector<int> pointMin;
public:
    int count = 0;

    void addToArea(Triangle* newData);
    bool isInArea(Ray ray);
    float distToArea(Triangle* from);
};

