/*
* 			Author : yyyf
* 		CreateDate : 2024/03/17 15:27:38
* 	   Description ：
*/
#ifndef H_Warehouse
#define H_Warehouse
#include <vector>
#include "Package.h"
#include "json.h"
#include "Debug.h"
#include "Table.h"

using std::vector;
/**
 * @brief 仓库，它应该位于共享内存当中
 * 包含了两种结构，一个是面向上层软件的指令结构，一个是面向本程序的数据结构
 */
class Warehouse
    : public Serializable{
        /**
         * @brief 该类所含有的键
         * 
         */
    class filed{
    public:
        static const char* isInUse;
        static const char* orderPackage;
        static const char* dataPackage;
        static const char* errMsg;
    };
    JSONObject warehouse;

    void addOrder();

public:
    Warehouse();

    void add(Table table);
    
    const char* serialize() override;
	void deserialize(const char* data) override;
};

#endif