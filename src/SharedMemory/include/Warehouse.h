/*
* 			Author : yyyf
* 		CreateDate : 2024/03/17 15:27:38
* 	   Description ：
*/
#ifndef H_Warehouse
#define H_Warehouse
#include <vector>
#include "Package.h"

using std::vector;

class Warehouse
    : public Serializable{
    bool isInUse;
    vector<Package> orderPackage;
    vector<Package> dataPackage;
public:
    Warehouse() : isInUse(false){}
    Warehouse(vector<Package> orders, vector<Package> data)
        : orderPackage(orders), dataPackage(data), isInUse(false){}

    vector<Package> getOrders();
    vector<Package> getData();

    const char* serialize() override;
	void deserialize(const char* data) override;
};

#endif