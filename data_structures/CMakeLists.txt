add_executable(data_structures
    hash_table_test.cpp
    hash_table.hpp

    main.cpp
)

target_link_libraries(data_structures GTest::GTest)
gtest_discover_tests(data_structures)
