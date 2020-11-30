#include <string>
#include <utility>

#include <gtest/gtest.h>

#include "HashTable.hpp"

TEST(HashTable, add)
{
    Hash_table<std::string, int> ht;

    std::pair<std::string, int> kv1 = { "John DOE", 123 };
    std::pair<std::string, int> kv2 = { "Alice DEE", 456 };

    ASSERT_NO_THROW(ht.add(kv1.first, kv1.second));
    ASSERT_NO_THROW(ht.add(kv2.first, kv2.second));

    ASSERT_EQ(ht.size(), 2);
}

TEST(HashTable, add_get)
{
    Hash_table<std::string, int> ht;

    std::pair<std::string, int> kv1 = { "John DOE", 123 };
    std::pair<std::string, int> kv2 = { "Alice DEE", 456 };

    ht.add(kv1.first, kv1.second);
    ht.add(kv2.first, kv2.second);

    ASSERT_EQ(ht.get(kv1.first), kv1.second);
    ASSERT_EQ(ht.get(kv2.first), kv2.second);
}

TEST(HashTable, remove)
{
    Hash_table<std::string, int> ht;

    std::pair<std::string, int> kv1 = { "John DOE", 123 };
    std::pair<std::string, int> kv2 = { "Alice DEE", 456 };

    ht.add(kv1.first, kv1.second);
    ht.add(kv2.first, kv2.second);

    ASSERT_NO_THROW(ht.remove(kv1.first));
    ASSERT_NO_THROW(ht.remove(kv2.first));

    ASSERT_TRUE(ht.is_empty());
    ASSERT_EQ(ht.size(), 0);
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
