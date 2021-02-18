#include <gtest/gtest.h>

#include "trie.hpp"

namespace {

TEST(trie, empty)
{
    trees::Trie trie;

    EXPECT_EQ(trees::match(trie, "umbrella"), 0);
    EXPECT_EQ(trees::match(trie, "jam"), 0);
    EXPECT_EQ(trees::match(trie, ""), 0);
}

TEST(trie, ascii)
{
    trees::Trie trie;

    trees::insert(trie, "saturday");
    trees::insert(trie, "satellite");
    trees::insert(trie, "saturn");
    trees::insert(trie, "satisfy");
    trees::insert(trie, "match");
    trees::insert(trie, "mat");
    trees::insert(trie, "paper");

    EXPECT_EQ(trees::match(trie, "sat"), 4);
    EXPECT_EQ(trees::match(trie, "satu"), 2);
    EXPECT_EQ(trees::match(trie, "sate"), 1);
    EXPECT_EQ(trees::match(trie, "mat"), 2);
    EXPECT_EQ(trees::match(trie, "p"), 1);
    EXPECT_EQ(trees::match(trie, "ur"), 0);
    EXPECT_EQ(trees::match(trie, ""), 0);
}

TEST(trie, utf_8)
{
    trees::Trie trie;

    trees::insert(trie, "saturday");
    trees::insert(trie, "satellite");
    trees::insert(trie, "saturn");
    trees::insert(trie, "кошка");
    trees::insert(trie, "слово");
    trees::insert(trie, "страна");
    trees::insert(trie, "красный");
    trees::insert(trie, "след");

    EXPECT_EQ(trees::match(trie, "sat"), 3);
    EXPECT_EQ(trees::match(trie, "сл"), 2);
    EXPECT_EQ(trees::match(trie, "к"), 2);
    EXPECT_EQ(trees::match(trie, "ра"), 0);
    EXPECT_EQ(trees::match(trie, ""), 0);
}

} // namespace
