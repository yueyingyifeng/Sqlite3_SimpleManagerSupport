//
// Created by Administrator on 2024/3/15.
//

#include "include/SQL.h"

const char* SQL::DATABASENAME{"database"};

int SQL::exe_sql_callback(void *package, int countOfCol, char **items, char **colName)
{
    return 0;
}

SQL::SQL(){
    if(sqlite3_open(DATABASENAME,&db) != SQLITE_OK)
        Debug::err("can not open or create database");
}

SQL::~SQL() {
    sqlite3_close(db);
}

Package SQL::executeSQLUntilFinish(const char *sql)
{
    Package* package;
    
    //exec 参数：数据库指针，sql语句，回调函数，传给回调函数的参数(package)，错误信息
    sqlite3_exec(db,sql,exe_sql_callback,package,package->errmsg);
    return *package;
}
