#include "SettingsFileManager.h"
const string SettingsFileManager::FILENAME_DBSettings {"DatabaseSettings.json"};
const string SettingsFileManager::FILENAME_Example_DBSettings_ModeSQL {"DatabaseSettings_sample_ModeSQL.json"};
const string SettingsFileManager::FILENAME_Example_DBSettings_ModeManual {"DatabaseSettings_sample_ModeManual.json"};
SettingsFileManager::SettingsFileManager(){}

JSONObject SettingsFileManager::readFile()
{
    ifstream ifs(FILENAME_DBSettings);
    JSONObject json;
    while (ifs.peek() != EOF){
        ifs >> json;
    }

    ifs.close();
    return json;
}

void SettingsFileManager::createDefaultFile()
{
//    JSONObject settings_ModeManual = Settings::generate_default_DbSettingsJSON_ModeManual();
    JSONObject settings_ModeSQL    = Settings::generate_default_DbSettingsJSON_ModeSQL();

    ofstream ofs1(FILENAME_Example_DBSettings_ModeManual);

//    ofs1 << settings_ModeManual;
    ofs1.close();

    ofstream ofs2 = ofstream(FILENAME_Example_DBSettings_ModeSQL);
    ofs2 << settings_ModeSQL;
    ofs2.close();
}

bool SettingsFileManager::isFileExists()
{
    ifstream ifs(FILENAME_DBSettings);
    if(!ifs.good()){
        ifs.close();
        return false;
    }
    ifs.close();
    return true;
}
//这里有问题，一直返回false
//bool SettingsFileManager::isSettingsFileLegal(const Settings settings) {
//    bool t = settings().contains(Settings::filed::MODE);;
//    return t;
//}