/*
* 			Author : yyyf
* 		CreateDate : 2024/03/08 16:04:45
* 	   Description ：
*/
#ifndef H_Config
#define H_Config
#include "json.h"
#include "Debug.h"
class Settings{
public:
    class filed{
    public:
        static const char* MODE;
        static const char* SQL;
    };

    enum class Mode{
        SQL
    };

    explicit Settings() = delete;
    explicit Settings(const JSONObject& settings) : settings(settings) {
        if(string(settings[Settings::filed::MODE]) == string("sql"))
            mode = Mode::SQL;
    }

    static JSONObject generate_default_DbSettingsJSON_ModeSQL();
    static JSONObject generate_default_DbSettingsJSON_ModeManual();

    JSONObject getSettings(){
        return settings;
    }

    Mode getMode() const{
        return mode;
    }

    JSONObject operator()() const{
        return settings;
    }
private:
    Mode mode;
    JSONObject settings;
};


#endif