#include "include/Warehouse.h"

vector<Package> Warehouse::getOrders()
{
    return orderPackage;
}

vector<Package> Warehouse::getData()
{
    return dataPackage;
}

const char *Warehouse::serialize()
{
    return nullptr;
}

void Warehouse::deserialize(const char *data)
{
}
