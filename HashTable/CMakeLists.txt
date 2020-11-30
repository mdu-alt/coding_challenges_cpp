include(GoogleTest)

add_executable(HashTable HashTable.hpp HashTable_test.cpp)
target_link_libraries(HashTable GTest::GTest)

gtest_discover_tests(HashTable)
