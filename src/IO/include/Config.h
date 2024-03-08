/*
* 			Author : yyyf
* 		CreateDate : 2024/03/08 16:04:45
* 	   Description ：
*/
#ifndef H_Config
#define H_Config
#include "json.h"

class Config{
    JSONObject settings;
public:
    explicit Config() {}
    explicit Config(const JSONObject settings) : settings(settings) {}
    
    static JSONObject generate_default_DbSettingsJSON_ModeSQL();
    static JSONObject generate_default_DbSettingsJSON_ModeManual();
};
#endif