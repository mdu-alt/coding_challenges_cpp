include(GoogleTest)

add_executable(BubbleSort ../Constants.hpp BubbleSort.hpp BubbleSort.cpp BubbleSort_test.cpp)
target_link_libraries(BubbleSort GTest::GTest)

gtest_discover_tests(BubbleSort)
