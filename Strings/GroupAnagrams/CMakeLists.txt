add_executable(GroupAnagrams
    GroupAnagrams.hpp
    GroupAnagrams.cpp
    GroupAnagrams_test.cpp
)

target_link_libraries(GroupAnagrams GTest::GTest)
gtest_discover_tests(GroupAnagrams)
