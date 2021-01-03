add_executable(strings
    almost_palindrome_test.cpp
    almost_palindrome.cpp
    almost_palindrome.hpp
    group_anagrams_test.cpp
    group_anagrams.cpp
    group_anagrams.hpp
    nested_parentheses_test.cpp
    nested_parentheses.cpp
    nested_parentheses.hpp
    repeated_characters_test.cpp
    repeated_characters.cpp
    repeated_characters.hpp

    main.cpp
)

target_link_libraries(strings GTest::GTest)
gtest_discover_tests(strings)
