//
// Created by Administrator on 2024/3/15.
//

#ifndef MANAGERSUPPORT_SQL_H
#define MANAGERSUPPORT_SQL_H
#include <iostream>
#include "sqlite3.h"
#include "../../Util/include/Debug.h"

class SQL {
    static const char* DATABASENAME;
    sqlite3* db{};
public:
    SQL();
    ~SQL();
    void executeSQL(const char* sql);
};

const char* SQL::DATABASENAME{"data"};


#endif //MANAGERSUPPORT_SQL_H
