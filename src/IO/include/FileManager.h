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
    
    Config readFile();
    void create();
    void createDefaultFile();
};

const string FileManager::FILENAME_DBSettings {"DatabaseSettings"};
#endif