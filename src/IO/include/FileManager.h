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
#include "json.h"
#include "Config.h"

using std::string;
using std::ifstream;
using std::ofstream;

class FileManager{
public:
    const static string FILENAME_DBSettings;
    const static string FILENAME_Example_DBSettings_ModeSQL;
    const static string FILENAME_Example_DBSettings_ModeManual;


    explicit FileManager();
    Config readFile();
    void createDefaultFile();
    bool isFileExists();
    bool isSettingsFileLegal(const Config config);
};

const string FileManager::FILENAME_DBSettings {"DatabaseSettings"};
const string FileManager::FILENAME_Example_DBSettings_ModeSQL {"DatabaseSettings_sample_ModeManual"};
const string FileManager::FILENAME_Example_DBSettings_ModeManual {"DatabaseSettings_sample_ModeSQL"};



#endif