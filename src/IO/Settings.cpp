#include "include/Settings.h"

JSONObject Settings::generate_default_DbSettingsJSON_ModeSQL()
{
    JSONObject  jsonObject;
    jsonObject["mode"] = "SQL";
    jsonObject["sql"] = JSONObject::array({
        "your SQL sentence1",
        "your SQL sentence2"
    });

    return jsonObject;
}

JSONObject Settings::generate_default_DbSettingsJSON_ModeManual()
{
    throw  "don't use this method!";
    JSONObject  jsonObject;
    jsonObject["mode"] = "Manual";
    //暂不实现...
    return jsonObject;
}