#pragma once
#include "libraries.hpp"
#include "classPolygon.hpp"

string file = "text.txt";

class Object
{
    vector<Polygon> poligons;
    
public:
    Object() {poligons.resize(0);}
    void readFile();
};
