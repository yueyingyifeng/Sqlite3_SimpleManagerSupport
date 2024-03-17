//
// Created by Administrator on 2024/3/15.
//

#ifndef MANAGERSUPPORT_DATAPACKAGE_H
#define MANAGERSUPPORT_DATAPACKAGE_H
#include "Serializable.h"
class DataPackage
        : public Serializable{
	bool isInUser;
public:

	const char* serialize() override;
	void deserialize(const char* data) override;
};


#endif //MANAGERSUPPORT_DATAPACKAGE_H
