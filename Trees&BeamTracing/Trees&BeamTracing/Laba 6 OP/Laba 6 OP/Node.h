#pragma once

#include "Area.h"

class Node 
{
public:
    Area area;
    Triangle* data;
    Node* left = nullptr;
    Node* right = nullptr;
};
