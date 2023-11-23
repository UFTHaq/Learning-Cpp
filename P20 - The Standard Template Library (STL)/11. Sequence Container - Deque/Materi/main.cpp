/*
    THE STL
    ==============================================================================
    std::deque (double ended queue)

    #include <deque>

    - Dynamic size
      - Handled automatically
      - Can expand and contract as needed
      - Elements are NOT stored in contigous memory

    - Direct element access (constant time)
    - Rapid insertion and deletion at the front and back (constant time)
    - Insertion or removal of elements (linear time)
    - All iterators available and may invalidate

    ==============================================================================
    std::deque - initialization and assignment

        std::deque<int> d {1,2,3,4,5};
        std::deque<int> d1 (10,100);            // ten 100s

        std::deque<std::string> stooges {
            std::string {"Fahmi"},
            "Thor",
            std::string {"Haq"}
        };

        d = {2,4,6,8,10};

    ==============================================================================
    std::deque - common methods

        Person p1 {"Fahmi", 18};
        std::deque<Person> d;

        d.push_back(p1);                        // add p1 to the back
        d.pop_back();                           // remove p1 from the back

        d.push_front(Person{"Fahmi", 20});
        d.pop_front();                          // remove element from the front

        d.emplace_back("Fahmi", 20);            // add to back efficient
        d.emplace_front("Thor", 24);            // add to front


*/