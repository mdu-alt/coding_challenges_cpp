include(GoogleTest)

add_executable(SelectionSort ../Constants.hpp SelectionSort.hpp SelectionSort.cpp SelectionSort_test.cpp)
target_link_libraries(SelectionSort GTest::GTest)

gtest_discover_tests(SelectionSort)
