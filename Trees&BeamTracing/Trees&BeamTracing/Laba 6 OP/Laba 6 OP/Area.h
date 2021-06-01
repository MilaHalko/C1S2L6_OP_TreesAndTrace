#include <stdio.h>
#include <iostream>
#include <vector>
#include "Triangle.h"
using namespace std;

class Area
{
    Point pointMax;
    Point pointMin;
public:
    int count = 0;

    void addToArea(Triangle* newData);
    bool isInArea(Ray ray);
    float distToArea(Triangle* from);
};