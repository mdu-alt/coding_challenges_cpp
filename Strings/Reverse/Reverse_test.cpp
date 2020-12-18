#include <algorithm>
#include <string>

#include <gtest/gtest.h>

#include "Reverse.hpp"

TEST(Reverse, empty)
{
    std::string string;
    std::string string_model{ string };

    reverse(string);
    std::ranges::reverse(string_model);

    ASSERT_EQ(string, string_model);
}

TEST(Reverse, single_char)
{
    std::string string{ "a" };
    std::string string_model{ string };

    reverse(string);
    std::ranges::reverse(string_model);

    ASSERT_EQ(string, string_model);
}

TEST(Reverse, single_word)
{
    std::string string{ "hello" };
    std::string string_model{ string };

    reverse(string);
    std::ranges::reverse(string_model);

    ASSERT_EQ(string, string_model);
}

TEST(Reverse, random_string)
{
    std::string string{ "wer4%6&b~gg';./<2km3!`ccr%)-=[\\" };
    std::string string_model{ string };

    reverse(string);
    std::ranges::reverse(string_model);

    ASSERT_EQ(string, string_model);
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
