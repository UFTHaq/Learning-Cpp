/*
    ===============================================================================
    ALGORITHMS

    - STL algorithms work on sequences of container elements provided to them
      by an iterator

    - STL has many common and useful algorithms

    - Too many to describe in this section
      - http://en.cppreference.com/w/cpp/algorithm

    - Many algoritms require extra information in order to do their work
      - Functors (function objects)
      - Function pointers
      - Lambda expression (C++11)

    ===============================================================================
    Algorithms and iterators

    - #include <algorithm>

    - Different containers support different types of iterators
      - Determines the types of algorithms supported

    - All STL algorithms expect iterators as arguments
      - Determines the sequence obtained from the container
    
    ===============================================================================
    Iterator invalidation

    - Iterators point to container elements

    - It's possible iterators become invalid during processing

    - Suppose we are iterating over a vector of 10 elements
      - And we clear() the vector while iterating? What happens?
      - Undefined behavior - our iterators are pointing to invalid locations

    ===============================================================================
    Example algorithm - find with primitives types

    - The find algorithm tries to locate the first ocurrenct of an element in
      a container

    - Lost of variations

    - Returns an iterator pointing to the located element or end()

        std::vector<int> vec {1, 2, 3};

        auto loc = std::find(vec.begin(), vec.end(), 3);

        if (loc != vec.end()) {                     // Found it
            std::cout << *loc << std::endl;         // 3
        }

    ===============================================================================
    for_each - using a functor

        struct Square_Functor {
            void operator() (int x) {               // overload() operator
                std::cout << x * x << " ";
            }
        };

        Square_Functor square;                      // Function object

        std::vector<int> vec {1, 2, 3, 4};

        std::for_each(vec.begin(), vec.begin(), square);
        //  1 4 9 16

    ===============================================================================
    for_each - using a function pointer

        void square(int x) {
            std::cout << x * x << " ";
        }

        std::vector<int> vec {1, 2, 3, 4};

        std::for_each(vec.begin(), vec.end(), square);
        // 1 4 9 16

    ===============================================================================
    for_each - using a lambda expression

        std::vector<int> vec {1, 2, 3, 4};

        std::for_each(vec.begin(), vec.end(), 
            [] (int x) {std::cout << x * x << " ";}     // lambda
        )

*/