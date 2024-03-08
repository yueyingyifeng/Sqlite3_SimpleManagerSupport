cmake_minimum_required(VERSION 3.26)

set(ProjectName ManagerSupport)
project(${ProjectName})

set(CMAKE_EXE_LINKER_FLAGS -static)

#---------------------------------------------------------------------#

include_directories(src/lib/json)
file(GLOB_RECURSE JSON_LIB                #将一个目录里的全部源文件上传
        src/lib/json/*.cpp
        )
add_library(JSON STATIC ${JSON_LIB} )       #添加静态库

include_directories(src/lib/sqlite3)
file(GLOB Sqlite3_LIB
        src/lib/sqlite3/*.c)
add_library(Sqlite3 STATIC ${Sqlite3_LIB})

#---------------------------------------------------------------------#

set(main src/main.cpp)

include_directories(src/IO/include)
file(GLOB IO
        src/IO/*.cpp)


add_executable(${ProjectName} ${main} ${IO})
target_link_libraries(${ProjectName} JSON)          
target_link_libraries(${ProjectName} Sqlite3)
