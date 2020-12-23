add_executable(RomanNumerals
    RomanNumerals.hpp
    RomanNumerals.cpp
    RomanNumerals_test.cpp
)

target_link_libraries(RomanNumerals GTest::GTest)
gtest_discover_tests(RomanNumerals)
