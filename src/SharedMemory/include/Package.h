/*
* 			Author : yyyf
* 		CreateDate : 2024/03/15 16:50:15
* 	   Description ：
*/
#ifndef H_Package
#define H_Package
#include "json.h"
#include "Table.h"
#include "Serializable.h"
/**
 * @brief 数据和指令包。
 * 含有两种结构，一个是面向上层软件的指令结构，一个是面向本程序的数据结构
 */
class Package
    : public Serializable{
    JSONObject data;
public:
    class field{
        public:
        static int id;
        static const char* sqlOrder;
        static const char* dataPackage;
        static const char* errMsg;
    };

    explicit Package(const char* sql);
    explicit Package(Table table);
    ~Package(){ data.clear(); }

    const char* serialize() override;
	void deserialize(const char* data) override;
};

#endif