#include "classPolygon.hpp"

Polygon::Polygon(const int coordinates [3][3])
{
    for (int i = 0; i < 3; i++)
    {
        this->v[i].x = coordinates[i][0];
        this->v[i].y = coordinates[i][1];
        this->v[i].z = coordinates[i][2];
    }
}
