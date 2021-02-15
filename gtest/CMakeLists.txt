file(COPY ${PROJECT_SOURCE_DIR}/gtest/run_tests.sh DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

find_package(GTest REQUIRED)
find_package(Threads REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})
SET(TEST_MAIN_SOURCES 
    ${PROJECT_SOURCE_DIR}/gtest/testMain.cc
    ${PROJECT_SOURCE_DIR}/gtest/learnTest.cc
    ${PROJECT_SOURCE_DIR}/gtest/vectorTest.cc
    ${PROJECT_SOURCE_DIR}/gtest/threadTest.cc
)

add_executable(TestMain ${TEST_MAIN_SOURCES})

target_link_libraries(TestMain ${GTEST_BOTH_LIBRARIES})
target_link_libraries(TestMain ${CMAKE_THREAD_LIBS_INIT})

add_test(NAME TestMain COMMAND TestMain)