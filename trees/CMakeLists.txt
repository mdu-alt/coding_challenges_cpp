add_executable(trees
    binary_tree_height_test.cpp
    binary_tree_height.cpp
    binary_tree_height.hpp
    trie_test.cpp
    trie.cpp
    trie.hpp

    trees.hpp
    trees.cpp
    main.cpp
)

target_link_libraries(trees GTest::GTest)
gtest_discover_tests(trees)
