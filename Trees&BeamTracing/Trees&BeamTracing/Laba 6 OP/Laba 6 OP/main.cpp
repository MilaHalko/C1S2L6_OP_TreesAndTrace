#include <iostream>
#include "Tree.h"
#include "bmp.h"
#include "Frame.h"

int main()
{
    Tree tree;
    string path = ".obj";

    vector<Triangle> data;
    for (int i = 0; i < data.size(); i++) {
        tree.addToTree(&data[i]);
    }

    int h = 64, w = 64;
    Frame frame(h, w, tree);
    float** pixelMat = frame.getFrame();

	system("pause");
}