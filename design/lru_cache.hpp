#ifndef DESIGN__LRU_CACHE
#define DESIGN__LRU_CACHE

/**
 * @file
 */

#include <memory>
#include <string>
#include <unordered_map>

namespace design {

/// @brief Least-recently used (LRU) cache
///
/// Implements a least-recently used cache system (with keys as integers and
/// values as strings). Has `O(1)` lookup and deletion time. Has hard-coded
/// maximum capacity of 100, and default of 10.
class LRU_Cache final {
  public:
    /// @brief Constructor: default
    LRU_Cache() = default;

    /// @brief Constructor: w/ capacity
    LRU_Cache(std::size_t capacity);

    /// @brief Constructor: copy (deleted)
    LRU_Cache(const LRU_Cache&) = delete;
    LRU_Cache& operator=(const LRU_Cache&) = delete;

    /// @brief Constructor: move (deleted)
    LRU_Cache(LRU_Cache&&) = delete;
    LRU_Cache& operator=(LRU_Cache&&) = delete;

    /// @brief Get
    std::string get(int key);

    /// @brief Put
    void put(int key, std::string value);

    /// @brief Get size
    std::size_t get_size() const noexcept { return m_cache.size(); }

    /// @brief Get capacity
    std::size_t get_capacity() const noexcept { return m_capacity; }

  private:
    struct Node final {
        int key{0};
        std::string value;

        std::shared_ptr<Node> next;
        std::weak_ptr<Node> prev;
    };

    /// @brief
    void push_front(std::shared_ptr<Node> node);

    /// @brief
    void move_front(std::shared_ptr<Node> node);

    /// @brief
    void pop_back();

    std::shared_ptr<Node> m_head{std::make_shared<Node>()};
    std::shared_ptr<Node> m_tail{std::make_shared<Node>()};

    std::unordered_map<int, std::shared_ptr<Node>> m_cache;
    std::size_t m_capacity{10};

    static constexpr std::size_t s_max_capacity{100};
};

} // namespace design

#endif
