#include "Table.h"

void Table::add(int length, const char** key, const char** value)
{
    for(int i{}; i<length; i++)
        table[key[i]].push_back(value[i]);
}

void Table::add(const char *key, const char *value)
{
    table[key].push_back(value);
}

const char *Table::operator[](const char* key) const
{
    return to_string(table[key]).c_str();
}

JSONObject Table::operator()() const
{
    return table;
}
