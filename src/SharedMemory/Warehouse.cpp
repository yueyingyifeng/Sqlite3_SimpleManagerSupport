#include "include/Warehouse.h"
#include "Warehouse.h"
const char* Warehouse::field::isInUse{"isInUse"};
const char* Warehouse::field::packages{"packages"};

int Warehouse::PackageCount{1};


Warehouse::Warehouse(){
    warehouse = {
        {field::isInUse,false},
        {field::packages,{}}
    };
}

const char *Warehouse::serialize()
{
    return to_string(warehouse).c_str();;
}

void Warehouse::deserialize(const char *data)
{
    warehouse = data;
}

void Warehouse::addPackage(Package package)
{
    warehouse[field::packages].push_back(package.serialize());
    Warehouse::PackageCount++;
}

void Warehouse::delPackageById(int id)
{
    if(!warehouse.contains(field::packages))
        throw "Warehouse did not initialize";
    for(auto it : warehouse[field::packages]);
    //还没实现这里，这里要根据 id 遍历删除 package
}
