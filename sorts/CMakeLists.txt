add_executable(sorts
    bubble_sort_test.cpp
    bubble_sort.cpp
    bubble_sort.hpp
    heap_sort_test.cpp
    heap_sort.cpp
    heap_sort.hpp
    insertion_sort_test.cpp
    insertion_sort.cpp
    insertion_sort.hpp
    merge_sort_test.cpp
    merge_sort.cpp
    merge_sort.hpp
    quick_sort_test.cpp
    quick_sort.cpp
    quick_sort.hpp
    selection_sort_test.cpp
    selection_sort.cpp
    selection_sort.hpp

    sorts.hpp
    main.cpp
)

target_link_libraries(sorts GTest::GTest)
gtest_discover_tests(sorts)
