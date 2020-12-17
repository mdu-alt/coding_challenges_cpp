include(GoogleTest)

add_executable(Reverse Reverse.hpp Reverse.cpp Reverse_test.cpp)
target_link_libraries(Reverse GTest::GTest)

gtest_discover_tests(Reverse)
