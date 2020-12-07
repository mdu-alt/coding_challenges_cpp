#include <string>
#include <vector>

#include <gtest/gtest.h>

#include "GroupAnagrams.hpp"

TEST(GroupAnagrams, empty)
{
    Word_list empty{ "" };
    Groupings result{ { "" } };

    ASSERT_EQ(group_anagrams(empty), result);
}

TEST(GroupAnagrams, one_word)
{
    Word_list one_word{ "hello" };
    Groupings result{ { "hello" } };

    ASSERT_EQ(group_anagrams(one_word), result);
}

TEST(GroupAnagrams, many_words)
{
    Word_list many_words{ "hello", "code", "cdeo", "ecod" };
    Groupings result{ { "code", "cdeo", "ecod" }, { "hello" } };

    ASSERT_EQ(group_anagrams(many_words), result);
}

TEST(GroupAnagrams, many_word_duplicates)
{
    Word_list many_word_duplicates{ "hello", "code", "cdeo", "ecod", "ecod", "ecod", "abc", "abc", "bac" };
    Groupings result{ { "abc", "bac" }, { "code", "cdeo", "ecod" }, { "hello" } };

    ASSERT_EQ(group_anagrams(many_word_duplicates), result);
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
