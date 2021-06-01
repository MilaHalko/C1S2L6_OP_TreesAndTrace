#pragma once
#include "Node.h"

class Tree 
{
    Node root;
    float findInNode(Ray ray, Node* node);
    void addToNode(Triangle* newTriangle, Node* node);
public:
    void addToTree(Triangle* newTriangle);
    float findInTree(Ray ray);
};