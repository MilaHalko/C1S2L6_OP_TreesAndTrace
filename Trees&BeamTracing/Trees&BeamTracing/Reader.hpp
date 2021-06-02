#pragma once
#include "libraries.hpp"

class ObjReader {
    string path;
    vector<vector<float>> vertexes;
    float lightPointX = -5.0, lightPointY = 0, lightPointZ = 0;

    void Read();
    vector<float> getPointFromLine(string);
    vector<int> getTriangeFromLine(string);
    void showMessage(string, bool error = 0);
    float getCosAplha(float, float, float, float, float, float, float, float, float);
    
public:
    vector<Triangle> triangles;
    
    ObjReader(string);
    void output();
};
