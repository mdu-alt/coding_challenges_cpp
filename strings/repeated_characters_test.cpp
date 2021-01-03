#include <gtest/gtest.h>

#include "repeated_characters.hpp"

namespace {

TEST(remove_repeated_characters, any)
{
    EXPECT_EQ(strings::remove_repeated_characters("mississippi"), "misp");
    EXPECT_EQ(strings::remove_repeated_characters("AaaaBbbbCcccDddd"), "AaBbCcDd");
    EXPECT_EQ(strings::remove_repeated_characters("cul-de-sacs"), "cul-desa");
    EXPECT_EQ(strings::remove_repeated_characters("abracadabra"), "abrcd");
}

} // namespace
