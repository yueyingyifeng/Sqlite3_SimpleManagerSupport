/*
* 			Author : yyyf
* 		CreateDate : 2024/03/22 21:58:15
* 	   Description ：
*/
#ifndef H_Table
#define H_Table
#include "json.h"
#include "Serializable.h"

class Table
    : public Serializable{
    JSONObject table;
public:
    void add(int length, const char** key, const char** value);
    void add(const char* key, const char* value);
    const char* operator[](const char* key) const;


    const char* serialize() override;
	void deserialize(const char* data) override;
};

#endif