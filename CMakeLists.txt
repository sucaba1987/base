cmake_minimum_required(VERSION 3.10)

project(myProject VERSION 1.0 LANGUAGES CXX)


enable_testing()

add_subdirectory(app)
add_subdirectory(test)
add_subdirectory(src)
