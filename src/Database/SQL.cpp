//
// Created by Administrator on 2024/3/15.
//

#include "include/SQL.h"

SQL::SQL(){
    if(sqlite3_open(DATABASENAME,&db) != SQLITE_OK)
        Debug::err("can not open or create  db");
}

SQL::~SQL() {
    sqlite3_close(db);
}
