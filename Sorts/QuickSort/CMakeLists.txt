include(GoogleTest)

add_executable(QuickSort ../Constants.hpp QuickSort.hpp QuickSort.cpp QuickSort_test.cpp)
target_link_libraries(QuickSort GTest::GTest)

gtest_discover_tests(QuickSort)
