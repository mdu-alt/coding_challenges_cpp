include(GoogleTest)

add_executable(BubbleSort ../Utility.hpp BubbleSort.hpp BubbleSort.cpp BubbleSort_test.cpp)
target_link_libraries(BubbleSort GTest::GTest)

gtest_discover_tests(BubbleSort)
