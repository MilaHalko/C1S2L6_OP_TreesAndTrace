#include "Reader.hpp"

ObjReader::ObjReader(string path) {
    this->path = path;
    Read();
}

void ObjReader::output() {
    cout << vertexes.size();
    for (int i = 0; i < vertexes.size(); i++)
        cout << vertexes[i][0] << "   " << vertexes[i][1] << "   " << vertexes[i][2] << endl;
}

void ObjReader::Read() {
    ifstream file(path);
    string line, bufferLine = "";
    if (file.is_open()) {
        while (getline(file, line)) {
            if (line[0] == 'v' && line[1] == ' ')
                vertexes.push_back(getPointFromLine(line.erase(0, 2)));
            else if (line[0] == 'f' && line[1] == ' ') {
                line.erase(0, 2);
                vector<int> triangle = getTriangeFromLine(line);
                
                Geometry geo(vertexes[triangle[0] - 1][0], vertexes[triangle[0] - 1][1], vertexes[triangle[0] - 1][2], vertexes[triangle[1] - 1][0], vertexes[triangle[1] - 1][1], vertexes[triangle[1] - 1][2], vertexes[triangle[2] - 1][0], vertexes[triangle[2] - 1][1], vertexes[triangle[2] - 1][2], lightPointX, lightPointY, lightPointZ);
                float cos = geo.getCos();
                
                Triangle temp(vertexes[triangle[0] - 1][0], vertexes[triangle[0] - 1][1], vertexes[triangle[0] - 1][2], vertexes[triangle[1] - 1][0], vertexes[triangle[1] - 1][1], vertexes[triangle[1] - 1][2], vertexes[triangle[2] - 1][0], vertexes[triangle[2] - 1][1], vertexes[triangle[2] - 1][2], cos);

                triangles.push_back(temp);
            }
        }
    }
    else {
        cout << "Enable to open obj. file!" << endl;
        exit(0);
    }
}

vector<float> ObjReader::getPointFromLine(string line) {
    vector<float> point;
    string data = "";
    for (int i = 0; i < line.size(); i++) {
        if (line[i] != ' ' && i != line.size() - 1)
            data += line[i];
        else {
            if (i == line.size() - 1)
                data += line[i];
            point.push_back(stod(data));
            data = "";
        }
    }
    return point;
}


vector<int> ObjReader::getTriangeFromLine(string line) {
    vector<int> Points;
    string data = "";
    bool stop = false;
    for (int i = 0; i < line.size(); i++) {
        if (line[i] != '/' && !stop)
            data += line[i];
        else if (data.size() > 0) {
            stop = true;
            Points.push_back(stoi(data)); data = "";
        }
        if (line[i] == ' ') stop = false;
    }
    return Points;
}

float ObjReader::getCosAplha(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3) {
    Geometry geo(x1, y1, z1, x2, y2, z2, x3, y3, z3, lightPointX, lightPointY, lightPointZ);
    return geo.getCos();
}
