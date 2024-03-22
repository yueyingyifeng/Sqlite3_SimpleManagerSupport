/*
* 			Author : yyyf
* 		CreateDate : 2024/03/15 16:50:15
* 	   Description ：
*/
#ifndef H_Package
#define H_Package
#include <string>

#include "Serializable.h"
class Package
    : public Serializable{

        int n;
        const char* data;
public:

        char* errmsg[0xff];

    explicit Package(int n, const char* data)
        : n(n), data(data){}
    ~Package(){
        delete[] data;
    }

    const char* serialize() override;
	void deserialize(const char* data) override;
};

#endif