/*
    THE STL
    ========================================================================================
    std::vector

    #include <vector>

    - Dynamic siz
      - Handled automatically
      - Can expand and contract as needed
      - Elements are stored in contigous memory as an array

    - Direct element access (constant time)
    - Rapid insertion and deletion at the back (constant time)
    - Insertion or removal of element (linear time)
    - All iterators available and may invalidate

    ========================================================================================
    std::vector - initialization and assignment

        std::vector<int> vec {1,2,3,4,5};
        std::Vector<int> vec1 (10,100);         // ten 100s

        std::vector<std::string> stooges {
            std::string {"Fahmi"},
            "Thor",
            std::string {"Haq"}
        };

        vec1 = {2,4,6,8,10};

    ========================================================================================
    std::vector - common methods

        std::vector<int> vec {1,2,3,4,5};

        std::cout << vec.size();            // 5
        std::cout << vec.capacity();        // 5
        std::cout << vec.max_size();        // a very large number

        std::cout << vec.at(0);             // 1
        std::cout << vec[1];                // 2

        std::cout << vec.front();           // 1
        std::cout << vec.back();            // 5

    ========================================================================================
    std::vector - common methods

        Person p1 {"Ukhem", 18};
        std::vector<Person> vec;

        vec.push_back(p1);                  // add p1 to the back
        vec.pop_back();                     // remove p1 from the back

        vec.push_back(Person{"Ukhem", 18});
        vec.emplace_back("Haq", 18);        // efficient

    ========================================================================================
    std::vector - common methods

        std::vector<int> vec1 {1,2,3,4,5};
        std::vector<int> vec2 {10,20,30,40,50};

        std::cout << vec1.empty();          // 0 = false
        vec1.swap(vec2);                    // swaps the 2 vector

        std::sort(vec1.begin(), vec1.end());

    ========================================================================================
    std::vector - common methods

        std::vector<int> vec1 {1,2,3,4,5};
        std::vector<int> vec2 {10,20,30,40,50};

        auto it = std::find(vec1.begin(), vec1.end(), 3);
        vec1.insert(it, 10);                // 1,2,10,3,4,5

        it = std::find(vec1.begin(), vec1.end(), 4);
        vec1::insert(it, vec2.begin(), vec2.end());
        // 1,2,10,3,10,20,30,40,50,4,5


*/