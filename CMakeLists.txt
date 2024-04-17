# 指定需要的cmake的最低版本
cmake_minimum_required(VERSION 3.27)

# 指定專案的名稱
project("cpp_test_1")

# 新增目標
add_executable("hello_world")

# 設置目標對應的檔案(可以是多個檔案)
target_sources(hello_world PRIVATE "main.cpp")

# 設定要用debug模式
set(CMAKE_BUILD_TYPE "Debug")
# 設定要用release模式
#set(CMAKE_BUILD_TYPE "Release")

#設定啟用提示
set(CMAKE_CXX_FLAGS_DEBUG_INIT "-Wall")
#設定啟用提示
#set(CMAKE_CXX_FLAGS_RELEASE_INIT "-Wall")
