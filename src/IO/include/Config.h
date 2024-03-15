/*
* 			Author : yyyf
* 		CreateDate : 2024/03/08 16:04:45
* 	   Description ：
*/
#ifndef H_Config
#define H_Config
#include "json.h"

class Config{
public:
    enum class Mode{
        SQL
    };

    explicit Config() = delete;
    explicit Config(const JSONObject& settings) : settings(settings) {
        mode = settings["mode"];
    }

    static JSONObject generate_default_DbSettingsJSON_ModeSQL();
    static JSONObject generate_default_DbSettingsJSON_ModeManual();

    JSONObject getSettings(){
        return settings;
    }

    Mode getMode(){
        return mode;
    }
private:
    Mode mode;
    JSONObject settings;
};
#endif