/*
* 			Author : yyyf
* 		CreateDate : 2024/03/08 16:02:33
* 	   Description ：
*/
#ifndef H_FileManager
#define H_FileManager
#include <iostream>
#include <fstream>
#include <string>
#include "Settings.h"

using std::string;
using std::ifstream;
using std::ofstream;

class SettingsFileManager{
public:
    const static string FILENAME_DBSettings;
    const static string FILENAME_Example_DBSettings_ModeSQL;
    const static string FILENAME_Example_DBSettings_ModeManual;


    explicit SettingsFileManager();
    Settings readFile();
    void createDefaultFile();
    bool isFileExists();
    bool isSettingsFileLegal(const Settings config);
};

const string SettingsFileManager::FILENAME_DBSettings {"DatabaseSettings"};
const string SettingsFileManager::FILENAME_Example_DBSettings_ModeSQL {"DatabaseSettings_sample_ModeManual"};
const string SettingsFileManager::FILENAME_Example_DBSettings_ModeManual {"DatabaseSettings_sample_ModeSQL"};



#endif