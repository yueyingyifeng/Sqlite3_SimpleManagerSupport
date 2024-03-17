//
// Created by Administrator on 2024/3/15.
//

#ifndef MANAGERSUPPORT_DEBUG_H
#define MANAGERSUPPORT_DEBUG_H
#include "../Colorful.cpp"

class Debug {
public:
    void operator()(const char* msg, bool newLine = true);
    static void err(const char* msg, bool newLine = true);
    static void msg(const char* msg, bool newLine = true);
    static void war(const char* msg, bool newLine = true);
};


#endif //MANAGERSUPPORT_DEBUG_H
