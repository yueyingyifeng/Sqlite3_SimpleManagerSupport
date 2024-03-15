#include "FileManager.h"
#include "sqlite3.h"

//模式一
//创建表的sql语句

//模式二
//数据库名字
//  表名1
//      列1 列类型 是否是主键
//      列2...

int callback(void* package, int countOfCol, char** items, char** colName){

}

int main() {
    sqlite3* db;
    sqlite3_open("test",&db);
    char* errmsg[0xff];
    sqlite3_exec(db,"CREATE TABLE t1 IF NOT EXISTS(" \
                             "id integer primary key,"\
                             "name text,"\
                             "age integer)",
                             callback,NULL,errmsg);

    sqlite3_close(db);
    return 0;
}
