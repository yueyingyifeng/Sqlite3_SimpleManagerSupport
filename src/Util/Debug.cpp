//
// Created by Administrator on 2024/3/15.
//

#include "include/Debug.h"
#include "Debug.h"

void Debug::operator()(const char *msg, bool newLine){
    cout << msg << (newLine ? "\n" : " ");
}

void Debug::err(const char *msg, bool newLine) {
    setTextColor("red");
    cout << msg <<  (newLine ? "\n" : " ");
    setTextColor();
}

void Debug::msg(const char *msg, bool newLine) {
    cout << msg << (newLine ? "\n" : " ");
}

void Debug::msg(JSONObject json, bool newLine)
{
    setTextColor("skyblue");
    cout << json << (newLine ? "\n" : " ");
    setTextColor();
}
void Debug::war(const char *msg, bool newLine) {
    setTextColor("yellow");
    cout << msg << (newLine ? "\n" : " ");
    setTextColor();
}
