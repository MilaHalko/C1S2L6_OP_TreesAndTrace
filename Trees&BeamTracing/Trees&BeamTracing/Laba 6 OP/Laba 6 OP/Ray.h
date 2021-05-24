#include <iostream>
#include <vector>
using namespace std;

class Ray
{
public:
    int x0; int y0; int z0;
    int a; int b; int c;
    vector<int> stPoint;
    vector<int> directionVector;

    Ray(int x0, int y0, int z0, int a, int b, int c);

};
