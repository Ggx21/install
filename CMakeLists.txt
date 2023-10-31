cmake_minimum_required(VERSION 3.0)

project(miniSysY)

# 添加编译的源文件，将所有的.cpp文件包含进来
file(GLOB_RECURSE MY_SOURCE_FILES "src/*.cpp")

execute_process(COMMAND export CLASSPATH="${CMAKE_SOURCE_DIR}/tools/antlr-4.13.0-complete.jar:$CLASSPATH")

# 预构建步骤: 运行 antlr4 命令生成文件
execute_process(COMMAND java -jar ${CMAKE_SOURCE_DIR}/tools/antlr-4.13.0-complete.jar -Dlanguage=Cpp -no-listener -visitor src/frontend/SysY.g4
                WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

# 添加 ANTLR4 运行时库的头文件目录
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/local/include/antlr4-runtime)

# 添加 ANTLR4 运行时库的链接目录
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/local/lib)

# 添加可执行文件
add_executable(miniSysY ${MY_SOURCE_FILES})

# 链接 ANTLR4 运行时库
target_link_libraries(miniSysY antlr4-runtime)
