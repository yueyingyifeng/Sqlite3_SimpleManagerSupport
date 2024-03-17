#include "SettingsFileManager.h"

SettingsFileManager::SettingsFileManager(){}

Settings SettingsFileManager::readFile()
{
    ifstream ifs(FILENAME_DBSettings);
    JSONObject json;
    while(ifs.eof())
        ifs >> json;
    Settings configFile(json);
    ifs.close();

    return configFile;
}

void SettingsFileManager::createDefaultFile()
{
    JSONObject settings_ModeManual = Settings::generate_default_DbSettingsJSON_ModeManual();
    JSONObject settings_ModeSQL    = Settings::generate_default_DbSettingsJSON_ModeSQL();

    ofstream ofs(FILENAME_Example_DBSettings_ModeManual);
    ofs << settings_ModeManual;
    ofs.close();

    ofs = ofstream(FILENAME_Example_DBSettings_ModeSQL);
    ofs << settings_ModeSQL;
    ofs.close();
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

bool SettingsFileManager::isSettingsFileLegal(const Settings config) {
    return false;
}