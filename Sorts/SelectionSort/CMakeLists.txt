include(GoogleTest)

add_executable(SelectionSort ../Utility.hpp SelectionSort.hpp SelectionSort.cpp SelectionSort_test.cpp)
target_link_libraries(SelectionSort GTest::GTest)

gtest_discover_tests(SelectionSort)
