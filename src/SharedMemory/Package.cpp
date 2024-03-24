#include "include/Package.h"

const char* Package::field::sqlOrder{"sql"};
const char* Package::field::dataPackage{"dataPackage"};
const char* Package::field::errMsg{"errMsg"};

const char *Package::serialize()
{
    return to_string(data).c_str();
}

void Package::deserialize(const char *data)
{
    this->data = data;
}
