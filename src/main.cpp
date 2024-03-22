#include "SettingsFileManager.h"
#include "sqlite3.h"
#include "Debug.h"

//模式一
//创建表的sql语句

//模式二
//数据库名字
//  表名1
//      列1 列类型 是否是主键
//      列2...
int callback(void* package, int countOfCol, char** items, char** colName){
    return 0;
}
void test(){
    sqlite3* db;
    sqlite3_open("test",&db);
    char* errmsg[0xff];
    //exec 参数：数据库指针，sql语句，回调函数，传给回调函数的参数，错误信息
    sqlite3_exec(db,"CREATE TABLE t1 IF NOT EXISTS(" \
                             "id integer primary key,"\
                             "name text,"\
                             "age integer)",
                 callback,NULL,errmsg);



    sqlite3_close(db);
}

Settings* initSettings(){
    SettingsFileManager fileManager;
    Settings* settings;
    if(fileManager.isFileExists()){
        JSONObject file = fileManager.readFile();
        try{
            SettingsFileManager::isSettingsFileLegal(file);
        }
        catch(const char* msg){
            fileManager.createDefaultFile();
            Debug::err(msg);
            exit(-1);
        }
        settings = new Settings(file);
    }
    else{
        fileManager.createDefaultFile();
        Debug::err(string(
            string("there is no setting file, please edit the default setting file, then change the name as ") +  string(SettingsFileManager::FILENAME_DBSettings)
        ).c_str());
        exit(-1);
    }

    return settings;
}

void executeSQLFromSettings(Settings* setting){
    if(setting->getMode() == Settings::Mode::SQL){
        JSONObject sql_array = setting->getSettings()[Settings::filed::SQL];
        for(auto & it : sql_array)
            cout << it << endl;


    }
}

void initStep(){
    Settings* settings;
    if((settings = initSettings()))
        executeSQLFromSettings(settings);


}


void processesStep(){

}

int main() {
    initStep();
    processesStep();

    return 0;
}
