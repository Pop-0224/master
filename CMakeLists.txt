cmake_minimum_required(VERSION 3.29)
project(master)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)

add_executable(master
    .idea/.gitignore
    .idea/editor.xml
    .idea/master.iml
    .idea/misc.xml
    .idea/modules.xml
    .idea/vcs.xml
    .idea/workspace.xml
    mian.c
    README.md)
