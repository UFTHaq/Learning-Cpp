/*
    WHAT IS THE STL
    ===================================================================================
    -   A library of powerful, reusable, adaptable, generic classes and functions

    -   Implemented using C++ templates

    -   Implements common data structures and algorithms

    -   Huge class library!!

    -   Alexander Stepanov (1994)

    ===================================================================================
    -   Assortment of commonly used containers

    -   Known time and size complexity

    -   Tried and tested - Reusability!!

    -   Consistent, fast, and type-safe

    -   Extensible

    ===================================================================================
    ELEMENTS of the STL

    -   Containers
        -   Collection of object or primitive types
            (array, vector, deque, stack, set, map, etc.)

    -   Algorithms
        -   Function for processing sequences of elements from containers
            (find, max, count, accumulate, sort, etc.)

    -   Iterators
        -   Generate sequences of element from containers
            (forward, reverse, by value, by reference, constant, etc.)

    ===================================================================================
    ELEMENTS of the STL

    A simple example

        #include <vector>
        #include <algorithm>

        std::vector<int> vec {1,5,3};
    -----------------------------------------------------------
    A simple example - sort a vector

        std::sort(vec.begin(), vec.end());

        for (auto element: vec) {
            std::cout << element << std::endl;
        }

        1
        3
        5

    -----------------------------------------------------------
    A simple example - reverse a vector

        std::reverse(vec.begin(), vec.end());

        for (auto element: vec) {
            std::cout << element << std::endl;
        }

        5
        3
        1
        
    -----------------------------------------------------------
    A simple example - accumulate

        int sum {};

        sum = std::accumulate(vec.begin(), vec.end(), 0);
        std::cout << sum << std::endl;

        9       // 1 + 3 + 5
    
    ===================================================================================
    TYPES OF CONTAINERS

    - Sequence container
        - array, vector, list, forward_list, deque

    - Associative containers
        - Set, multi set, map, multi map

    - Container adapters
        - stack, queue, priority queue  

    ===================================================================================
    TYPES OF ITERATORS

    - Input iterators - from the container to the program
    - Output iterators - from the program to the container
    - Forward iterators - navigate one item at a time in one direction
    - Bi-directional iterators - navigate one time at a time both direction
    - Random access iterators - directly access a container item

    ===================================================================================
    TYPES OF ALGORITMHS

    - About 60 algorithms in the STL
    - Non-modifying
    - Modifying


*/