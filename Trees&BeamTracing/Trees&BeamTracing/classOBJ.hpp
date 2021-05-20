#include "libraries.hpp"

string file = "text.txt";

struct point
{
    int x;
    int y;
    int z;
};

class Polygon
{
    point v[3];
    
public:
    
    Polygon(int coordinates [3][3])
    {
        for (int i = 0; i < 3; i++)
        {
            this->v[i].x = coordinates[i][0];
            this->v[i].y = coordinates[i][1];
            this->v[i].z = coordinates[i][2];
        }
    }
};


class Object
{
    vector<Polygon> poligons;
    
public:
    Object() {poligons.resize(0);}
    void readFile();
};


void Object::readFile()
{
    ifstream fin (file);
    
    if (!fin) cout << "Error!" << endl;
    else
    {
        string str;
        while (!fin.eof())
        {
            str = "";
            getline(fin, str);
            
            if (str.find("f ") == 1)
            {
                string number = " ";
                int coordinates [3][3];
                int vertice = 0;
                int exis = 0;
                
                for (int i = 0; i < str.size(); i++)
                {
                    while (isnumber(str[i]))
                    {
                        number += str[i];
                        i++;
                    }
                    
                    if (number != " ")
                    {
                        coordinates[vertice][exis] = stoi(number);
                        vertice++;
                        exis++;
                        number = "";
                    }
                }
                poligons.push_back(coordinates);
            }
        }
        fin.close();
    }
}
