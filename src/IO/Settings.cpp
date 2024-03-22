#include "include/Settings.h"
const char* Settings::filed::MODE{"mode"};
const char* Settings::filed::SQL{"sql"};
JSONObject Settings::generate_default_DbSettingsJSON_ModeSQL()
{
    JSONObject  jsonObject;
    jsonObject[Settings::filed::MODE] = Settings::filed::MODE;
    jsonObject[Settings::filed::SQL] = JSONObject::array({
        "your SQL sentence1",
        "your SQL sentence2"
    });

    return jsonObject;
}

JSONObject Settings::generate_default_DbSettingsJSON_ModeManual()
{
    throw  "don't use this method now!";
    JSONObject  jsonObject;
    jsonObject["mode"] = "Manual";
    //暂不实现...
    return jsonObject;
}
