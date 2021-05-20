#include "classObject.hpp"

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
