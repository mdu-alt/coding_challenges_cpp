#include <exception>
#include <string>
#include <utility>

#include <gtest/gtest.h>

#include "hash_table.hpp"

const std::pair<std::string, int> kv1 = { "John DOE", 123 };
const std::pair<std::string, int> kv2 = { "Alice DEE", 456 };

TEST(HashTable, add)
{
    Hash_table<std::string, int> ht;

    ASSERT_NO_THROW(ht.add(kv1.first, kv1.second));
    ASSERT_NO_THROW(ht.add(kv2.first, kv2.second));

    ASSERT_THROW(ht.add(kv1.first, kv1.second), std::invalid_argument);
    ASSERT_THROW(ht.add(kv2.first, kv2.second), std::invalid_argument);

    ASSERT_EQ(ht.size(), 2);
}

TEST(HashTable, get)
{
    Hash_table<std::string, int> ht;

    ht.add(kv1.first, kv1.second);
    ht.add(kv2.first, kv2.second);

    ASSERT_EQ(ht.get(kv1.first), kv1.second);
    ASSERT_EQ(ht.get(kv2.first), kv2.second);
}

TEST(HashTable, set)
{
    Hash_table<std::string, int> ht;

    ASSERT_THROW(ht.set(kv1.first, kv1.second), std::invalid_argument);
    ASSERT_THROW(ht.set(kv2.first, kv2.second), std::invalid_argument);

    ht.add(kv1.first, kv1.second);
    ht.add(kv2.first, kv2.second);

    int new_kv1_value = 627;
    int new_kv2_value = 987;

    ASSERT_NO_THROW(ht.set(kv1.first, new_kv1_value));
    ASSERT_NO_THROW(ht.set(kv2.first, new_kv2_value));

    ASSERT_EQ(ht.get(kv1.first), new_kv1_value);
    ASSERT_EQ(ht.get(kv2.first), new_kv2_value);
}

TEST(HashTable, remove)
{
    Hash_table<std::string, int> ht;

    ht.add(kv1.first, kv1.second);
    ht.add(kv2.first, kv2.second);

    ASSERT_NO_THROW(ht.remove(kv1.first));
    ASSERT_NO_THROW(ht.remove(kv2.first));

    ASSERT_TRUE(ht.is_empty());
}
