#pragma once
#include "Tree.h"

using namespace std;

class Frame 
{
private:
	float x = -10, z1 = -1, y1 = -1, z2 = 1, y2 = 1;	
	float xShutter = -5, yShutter = 0, zShutter = 0;

	//float y = -10, z1 = -1, z2 = 1, x1 = -1, x2 = 1;
	//float xShutter = 0, yShutter = -5, zShutter = 0;

	Tree& tree;
	int height, width;
	float** frame;
	float** generateFrame();
	void fillFrame();
public:
	Frame(int h, int w, Tree& tree) : height(h), width(w), frame(generateFrame()), tree(tree) { fillFrame(); };
	float** getFrame() { return frame; }
};