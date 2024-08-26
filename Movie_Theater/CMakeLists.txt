# CMakeList.txt: Movie_Theater 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#

# 将源代码添加到此项目的可执行文件。
add_executable (Movie_Theater "Movie_Theater.cpp" "Movie_Theater.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Movie_Theater PROPERTY CXX_STANDARD 20)
endif()

# TODO: 如有需要，请添加测试并安装目标。
