#include "Reader.hpp"

ObjReader::ObjReader(string path) {
    this->path = path;
    Read();
}
