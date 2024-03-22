//
// Created by Administrator on 2024/3/15.
//

#ifndef MANAGERSUPPORT_SQL_H
#define MANAGERSUPPORT_SQL_H
#include <iostream>
#include "sqlite3.h"
#include "Package.h"
#include "../../Util/include/Debug.h"

class SQL {
    static const char* DATABASENAME;
    sqlite3* db{};
protected:
    static int exe_sql_callback(void* package, int countOfCol, char** items, char** colName);

public:
    SQL();
    ~SQL();
    Package executeSQLUntilFinish(const char* sql);
};




#endif //MANAGERSUPPORT_SQL_H
