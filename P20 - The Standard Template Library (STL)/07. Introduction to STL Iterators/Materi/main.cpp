/*
    =======================================================================================
    ITERATORS

    An iterator is an object (like a pointer) that points to an element inside the container. 
    We can use iterators to move through the contents of the container. They can be visualised 
    as something similar to a pointer pointing to some location and we can access content at 
    that particular location using them.

    - Allows abstracting an arbitrary containter as a sequence of elements
    - They are objects that work like pointers by design
    - Most container classes can be traversed with iterators

    =======================================================================================
    Declaring iterators

    - Iterators must be declared bases on the container type they will iterate over

        container_type::iterator_type iterator_name;


        std::vector<int>::iterator it1;

        std::list<std::string>::iterator it2;

        std::map<std::string, std::string>::iterator it3;

        std::set<char>::iterator it4;

    =======================================================================================
    Initializin Iterators

        std::vector<int> vec {1, 2, 3};

        std::vector<int>::iterator it = vec.begin();

        or

        auto it = vec.begin();

    =======================================================================================
    Using iterators - std::vector

        std::vector<int> vec {1, 2, 3};

        std::vector<int>::iterator it = vec.begin();

        while (it != vec.end()) {
            std::cout << *it << " ";
            it++;
        }
        // 1 2 3

    =======================================================================================
    Using iterators - std::vector

        std::vector<int> vec {1, 2, 3};

        for (auto it = vec.begin(); it != vec.end(); i++) {
            std::cout << *it << " ";
        }
        // 1 2 3

    - This is how range-based for loop works

    =======================================================================================
    Using iterators - std::set

        std::set<char> suits {'C', 'H', 'S', 'D'};

        auto it = suits.begin();

        while (it != suits.end()) {
            std::cout << *it << " " << std::endl;
            it++;
        }
        // C H S D

    =======================================================================================
    Reverse Iterators

    - Works in reverse
    - Last element is the first and first is the last
    - ++ moves backward, --moves forward

        std::vector<int> vec {1, 2, 3};
        std::vector<int>::reverse_iterator it = vec.rbegin();
        while (it != vec.rend()) {
            std::cout << *it << " ";
            it++;
        }
        // 3 2 1

    =======================================================================================
    Other Iterator

    - begin() and end()
      - iterator

    - cbegin() and cend()
      - const_iterator

    - rbegin() and rend()
      - reverse_iterator

    - crbegin() and crend()
      - const_reverse_iterator



*/