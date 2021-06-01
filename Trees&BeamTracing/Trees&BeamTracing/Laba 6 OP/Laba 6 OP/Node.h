#include <stdio.h>
#include "Area.h"

class Node 
{
public:
    Area area;
    Triangle* data;
    Node* left = NULL;
    Node* right = NULL;
};