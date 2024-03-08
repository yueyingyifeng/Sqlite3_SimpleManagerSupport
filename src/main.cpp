#include <iostream>
#include "json.h"
#include "sqlite3.h"

using json = nlohmann::json;
//模式一
//创建表的sql语句

//模式二
//数据库名字
//  表名1
//      列1 列类型 是否是主键
//      列2...


int main() {
    json j;
    j['a'] = "hello";
    std::cout << j['a'] << std::endl;

    sqlite3* db;							//数据库结构体
    int rc = sqlite3_open("text.db", &db);	//尝试创建/打开数据库

    return 0;
}
