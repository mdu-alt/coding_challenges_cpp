#ifndef HASH_TABLE_HPP
#define HASH_TABLE_HPP

#include <algorithm>
#include <cmath>
#include <functional>
#include <list>
#include <utility>
#include <vector>

template <typename K, typename V>
class Hash_table final {
  public:
    using Hash_node = std::pair<K, V>;

    Hash_table() : m_buckets(m_size)
    {
    }
    ~Hash_table() = default;

    void add(const K& key, const V& value)
    {
        auto& list = m_buckets.at(hash_function(key));
        auto record = std::find_if(list.begin(), list.end(), std::bind(find_key, std::placeholders::_1, key));

        if (record != list.end()) {
            record->second = value;
        }
        else {
            list.push_back({ key, value });
            m_count++;
        }
    }

    V get(const K& key) const
    {
        auto& list = m_buckets.at(hash_function(key));
        auto record = std::find_if(list.cbegin(), list.cend(), std::bind(find_key, std::placeholders::_1, key));

        if (record != list.end()) {
            return record->second;
        }
        else {
            throw std::out_of_range{ "ERROR: no such key" };
        }
    }

    void remove(const K& key)
    {
        auto& list = m_buckets.at(hash_function(key));
        m_count -= list.remove_if(std::bind(find_key, std::placeholders::_1, key));
    }

    int size() const noexcept
    {
        return m_count;
    }

    bool is_empty() const noexcept
    {
        for (auto&& e : std::as_const(m_buckets)) {
            if (!e.empty()) {
                return false;
            }
        }

        return true;
    }

  private:
    int hash_function(const K& key) const noexcept
    {
        int hash = std::hash<K>{}(key);

        return std::abs(hash % m_size);
    }

    static bool find_key(const Hash_node& a, const K& key) noexcept
    {
        return a.first == key;
    }

    const int m_size{ 100 };

    int m_count{ 0 };
    std::vector<std::list<Hash_node>> m_buckets;
};

#endif
