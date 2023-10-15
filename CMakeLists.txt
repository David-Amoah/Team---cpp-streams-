cmake_minimum_required(VERSION 3.26)
project(lossed)

set(CMAKE_CXX_STANDARD 17)

add_executable(lossed main.cpp
        Team.cpp
        Team.h
        ManageTeams.cpp
        ManageTeams.h
)
