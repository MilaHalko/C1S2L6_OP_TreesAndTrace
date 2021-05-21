#include "OBJ_classes.hpp"

Object::Object() {poligons.resize(0);}

void Object::readFile()
{
    ifstream fin ("Sphere.objм");
    
    if (!fin) cout << "Error!" << endl;
    else
    {
        string str;
        while (!fin.eof())
        {
            str = "";
            getline(fin, str);
            
            if (str.find("f ") == 0)
            {
                string number = "";
                vector<int> coordinates;
                coordinates.resize(0);
                
                for (int i = 0; i < str.size(); i++)
                {
                    while (isnumber(str[i])  ||  str[i] == '.'  ||  str[i] == '-')
                    {
                        number += str[i];
                        i++;
                    }
                    
                    if (number != "")
                    {
                        coordinates.push_back(stoi(number));
                        number = "";
                    }
                }
                Polygon newPoly (coordinates);
                poligons.push_back(newPoly);
            }
        }
        fin.close();
    }
}

void Object::print()        // проверОчка
{
    for (int i = 0; i < poligons.size(); i++) {
        for (int j = 0; j < 3; j++) {
            cout << poligons[i].v[j].x << "/" << poligons[i].v[j].y << "/" << poligons[i].v[j].z;
            cout << " ";
        }
        cout << endl;
    }
}
