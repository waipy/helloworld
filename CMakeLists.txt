cmake_minimum_required(VERSION 3.0.0)
project(hello VERSION 0.1.0)

include(CTest)
enable_testing()

aux_source_directory(. DIR_SRCS)
add_executable(hello ${DIR_SRCS})

add_subdirectory(lib)

add_executable(date date.cpp lib)
target_link_libraries(date lib)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
