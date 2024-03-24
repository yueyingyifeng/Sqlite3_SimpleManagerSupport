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
 * @brief 仓库，负责将 warehouse 写入进共享内存，而 Package 则被写进 warehouse 里
 * 
 */
class Warehouse
    : public Serializable{
        /**
         * @brief 该类所含有的键
         * 
         */
    class field{
    public:
        static const char* isInUse;
        static const char* packages;
    };

    JSONObject warehouse;
    static int PackageCount;

public:
    Warehouse();

    void addPackage(Package package);
    void delPackageById(int id);

    
    
    const char* serialize() override;
	void deserialize(const char* data) override;
};

#endif