#include "OBJ_classes.hpp"

Polygon::Polygon(vector<int> coordinates)
{
    int counter = 0;
    for (int i = 0; i < 3; i++)
    {
        this->v[i].x = coordinates[counter];
        this->v[i].y = coordinates[counter + 1];
        this->v[i].z = coordinates[counter + 2];
        counter += 3;
    }
}
