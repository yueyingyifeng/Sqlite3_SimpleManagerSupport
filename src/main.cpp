#include <iostream>
#include <fstream>
#include "json.h"
#include "sqlite3.h"


//模式一
//创建表的sql语句

//模式二
//数据库名字
//  表名1
//      列1 列类型 是否是主键
//      列2...


int main() {
    
    JSONObject j1,j2,j3;
    j1["table"] = "table name1";
    j3["name"] = "nb";
    j2["list"] = j3;

    JSONObject j{j1,j2,j3};

    std::ofstream ofs("test.json");
    ofs << j;

    sqlite3* db;							//数据库结构体
    int rc = sqlite3_open("text.db", &db);	//尝试创建/打开数据库

    return 0;
}
