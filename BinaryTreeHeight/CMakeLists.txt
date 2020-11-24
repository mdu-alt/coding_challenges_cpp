include(GoogleTest)

add_executable(BinaryTreeHeight BinaryTreeHeight.cpp BinaryTreeHeight_test.cpp)
target_link_libraries(BinaryTreeHeight GTest::GTest)

gtest_discover_tests(BinaryTreeHeight)
