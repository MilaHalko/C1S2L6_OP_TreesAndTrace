#include <iostream>
#include "Tree.h"
#include "Reader.h"
#include "Frame.h"
#include "bmp.h"

int main() 
{
    Tree tree;
    string path = "cow.obj";

    ObjReader reader(path);
    vector<Triangle> data = reader.triangles;


    for (int i = 0; i < data.size(); i++) 
    {
        tree.addToTree(&data[i]);
    }


    int h = 720, w = 720;
    Frame frame(h, w, tree);

    float** pixelMat = frame.getFrame();


    bmpWriter writer("test.bmp", pixelMat, h, w);

    writer.bmpWrite();

    system("pause");
}