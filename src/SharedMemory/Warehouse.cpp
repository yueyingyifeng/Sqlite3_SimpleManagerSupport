#include "include/Warehouse.h"
#include "Warehouse.h"
const char* Warehouse::filed::isInUse{"isInUse"};
const char* Warehouse::filed::orderPackage{"orderPackage"};
const char* Warehouse::filed::dataPackage{"dataPackage"};
const char* Warehouse::filed::errMsg{"errMsg"};


Warehouse::Warehouse(){
    warehouse = {
        {filed::isInUse,false},
        {filed::errMsg, "none"}
    };
    warehouse[filed::orderPackage].push_back("0");
    warehouse[filed::dataPackage].push_back("ok");
}

const char *Warehouse::serialize()
{
    return to_string(warehouse).c_str();;
}

void Warehouse::deserialize(const char *data)
{
    warehouse = data;
}

void Warehouse::add(Table table)
{
    warehouse[filed::dataPackage].push_back(table());
}