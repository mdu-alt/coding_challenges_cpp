add_executable(arrays
    ascending_sublists_test.cpp
    ascending_sublists.cpp
    ascending_sublists.hpp

    main.cpp
)

target_link_libraries(arrays GTest::GTest)
gtest_discover_tests(arrays)
