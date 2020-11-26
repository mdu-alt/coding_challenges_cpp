#include <algorithm>
#include <numeric>
#include <random>
#include <utility>
#include <vector>

inline std::pair<std::vector<int>, std::vector<int>> make_vectors(int size)
{
    std::vector<int> sorted(size);

    std::iota(std::begin(sorted), std::end(sorted), 0);

    std::vector<int> unsorted{ sorted };

    std::shuffle(std::begin(unsorted), std::end(unsorted), std::mt19937{ std::random_device{}() });

    return { sorted, unsorted };
}
