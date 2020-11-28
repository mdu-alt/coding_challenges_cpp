include(GoogleTest)

add_executable(InsertionSort ../Constants.hpp InsertionSort.hpp InsertionSort.cpp InsertionSort_test.cpp)
target_link_libraries(InsertionSort GTest::GTest)

gtest_discover_tests(InsertionSort)
