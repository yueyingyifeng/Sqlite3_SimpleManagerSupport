#include "FileManager.h"

FileManager::FileManager(){}

Config FileManager::readFile()
{
    ifstream ifs(FILENAME_DBSettings);
    JSONObject json;
    ifs >> json;
    Config configFile(json);
    ifs.close();

    return configFile;
}

void FileManager::createDefaultFile()
{
    JSONObject settings_ModeManual = Config::generate_default_DbSettingsJSON_ModeManual();
    JSONObject settings_ModeSQL    = Config::generate_default_DbSettingsJSON_ModeSQL();

    ofstream ofs(FILENAME_Example_DBSettings_ModeManual);
    ofs << settings_ModeManual;
    ofs.close();

    ofs = ofstream(FILENAME_Example_DBSettings_ModeSQL);
    ofs << settings_ModeSQL;
    ofs.close();
}

bool FileManager::isFileExists()
{
    ifstream ifs(FILENAME_DBSettings);
    if(!ifs.good()){
        ifs.close();
        return false;
    }
    ifs.close();
    return true;
}

bool FileManager::isSettingsFileLegal(const Config config) {
    return false;
}