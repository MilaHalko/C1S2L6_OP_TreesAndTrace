#pragma once
#include "libraries.hpp"

struct point
{
    int x;
    int y;
    int z;
};


class Polygon
{
public:
    point v[3];
    Polygon() {};
    Polygon(vector<int>);
};


class Object
{
    vector<Polygon> poligons;
    
public:
    Object();
    void readFile();
    void print();
};

