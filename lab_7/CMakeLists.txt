cmake_minimum_required(VERSION 3.21)
project(lab_7)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab_7 main.cpp Entity/Entity.h Entity/Entity.cpp Repo/Repo.h Repo/Repo.cpp Tests/Tests.h Tests/Tests.cpp Service/Service.h Service/Service.cpp UI/UI.h UI/UI.cpp)
