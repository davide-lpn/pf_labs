cmake_minimum_required(VERSION 3.16)
project(nrangen_mean_std VERSION 0.1.0)

# Abilita i warning del compilatore
string(APPEND CMAKE_CXX_FLAGS " -Wall -Wextra")

# Eseguibile 1: il programma vero
add_executable(nrangen_mean_std
    main.cpp
    nrangen_mean_std.cpp
)

# Eseguibile 2: i test
add_executable(nrangen_mean_std.test
    nrangen_mean_std.test.cpp
    nrangen_mean_std.cpp
)