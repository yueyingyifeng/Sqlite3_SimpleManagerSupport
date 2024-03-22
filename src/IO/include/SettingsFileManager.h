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
    JSONObject readFile();
    void createDefaultFile();
    bool isFileExists();
    static bool isSettingsFileLegal(const JSONObject settings);
};





#endif