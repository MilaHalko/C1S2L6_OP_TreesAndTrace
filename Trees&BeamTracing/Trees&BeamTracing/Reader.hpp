#pragma once
#include "libraries.hpp"

class ObjReader {
    string path;
    vector<vector<float>> vertexes;
    float lightPointX = -5.0, lightPointY = 0, lightPointZ = 0;

public:
    vector<Triangle> triangles;
    ObjReader(string path);
};
