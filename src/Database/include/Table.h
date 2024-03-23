/*
* 			Author : yyyf
* 		CreateDate : 2024/03/22 21:58:15
* 	   Description ：
*/
#ifndef H_Table
#define H_Table
#include "json.h"
#include "Serializable.h"
/**
 * @brief 用于保存来自数据库的表
 * 
 */
class Table{
    JSONObject table;
public:
    /**
     * @brief 添加一行数据
     * 
     * @param length 
     * @param key 
     * @param value 
     */
    void add(int length, const char** key, const char** value);
    /**
     * @brief 在键中添加数据，感觉没啥用。。。
     * 
     * @param key 
     * @param value 
     */
    void add(const char* key, const char* value);
    /**
     * @brief 获取键值对
     * 
     * @param key 
     * @return const char* 
     */
    const char* operator[](const char* key) const;

    /**
     * @brief 获取 table 的 JSON 数据
     * 
     * @return JSONObject 
     */
    JSONObject operator()() const;
};

#endif