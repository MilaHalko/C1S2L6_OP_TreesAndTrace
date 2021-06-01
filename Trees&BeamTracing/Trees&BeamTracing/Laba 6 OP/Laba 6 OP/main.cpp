#include <iostream>
#include "Tree.h"

int main()
{
    Tree tree;
    string path = ".obj";

    vector<Triangle> data;
    for (int i = 0; i < data.size(); i++) {
        tree.addToTree(&data[i]);
    }

	system("pause");
}