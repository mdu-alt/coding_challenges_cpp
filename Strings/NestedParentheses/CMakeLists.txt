include(GoogleTest)

add_executable(NestedParentheses NestedParentheses.hpp NestedParentheses.cpp NestedParentheses_test.cpp)
target_link_libraries(NestedParentheses GTest::GTest)

gtest_discover_tests(NestedParentheses)
