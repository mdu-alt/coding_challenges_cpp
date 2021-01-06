add_executable(sequences
    ascending_sublists_test.cpp
    ascending_sublists.cpp
    ascending_sublists.hpp

    main.cpp
)

target_link_libraries(sequences GTest::GTest)
gtest_discover_tests(sequences)
