cmake_minimum_required(VERSION 3.9)

set(CMAKE_CXX_STANDARD 11)

project(AlwaysLove)

add_subdirectory(proto)

add_subdirectory(leveldb)

add_executable(AlwaysLove main.cc req.cc)

target_link_libraries(AlwaysLove ProtoLearn protobuf LeveldbLearn leveldb)