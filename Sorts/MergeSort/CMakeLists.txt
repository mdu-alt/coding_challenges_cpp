include(GoogleTest)

add_executable(MergeSort ../Constants.hpp MergeSort.hpp MergeSort.cpp MergeSort_test.cpp)
target_link_libraries(MergeSort GTest::GTest)

gtest_discover_tests(MergeSort)
