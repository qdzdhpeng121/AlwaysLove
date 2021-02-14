find_package(GTest REQUIRED)
find_package(Threads REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})
add_executable(TestMain testMain.cc learnTest.cc vectorTest.cc)

target_link_libraries(TestMain ${GTEST_BOTH_LIBRARIES})
target_link_libraries(TestMain ${CMAKE_THREAD_LIBS_INIT})

add_test(NAME TestMain COMMAND TestMain)