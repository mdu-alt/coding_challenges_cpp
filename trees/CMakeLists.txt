add_executable(trees
    binary_tree_height_test.cpp
    binary_tree_height.cpp
    binary_tree_height.hpp

    trees.hpp
    main.cpp
)

target_link_libraries(trees GTest::GTest)
gtest_discover_tests(trees)
