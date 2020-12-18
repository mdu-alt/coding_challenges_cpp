add_executable(LargestBinaryGap
    LargestBinaryGap.hpp
    LargestBinaryGap.cpp
    LargestBinaryGap_test.cpp
)

target_link_libraries(LargestBinaryGap GTest::GTest)
gtest_discover_tests(LargestBinaryGap)
