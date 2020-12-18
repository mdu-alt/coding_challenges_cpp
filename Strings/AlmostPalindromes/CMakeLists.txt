add_executable(AlmostPalindromes
    AlmostPalindromes.hpp
    AlmostPalindromes.cpp
    AlmostPalindromes_test.cpp
)

target_link_libraries(AlmostPalindromes GTest::GTest)
gtest_discover_tests(AlmostPalindromes)
