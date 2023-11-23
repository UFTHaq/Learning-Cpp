/*
    THE STL
    ===============================================================================================
    std::array (C++11)

    #include <array>

    - Fixed size
      - Size must be known at compile time
    - Direct element eccess
    - Provides access to the underlying raw array
    - Use instead of raw arrays when possible
    - All iterators available and do not invalidate

    ===============================================================================================
    std::array - initialization and assignment

        std::array<int, 5> arr1 {{1,2,3,4,5}};      C++11 VS C++14

        std::array<std::string, 3> stooges {
            std::string{"Fahmi"},
            "Thor",
            std::string{"Haq"}
        };

        arr1 = {2, 4, 6, 8, 10};

    ===============================================================================================
    std::array - common methods

        std::array<int, 5> arr {1, 2, 3, 4, 5};

        std::cout << arr.size();        // 5

        std::cout << arr.at(0);         // 1
        std::cout << arr[1];            // 2

        std::cout << arr.front();       // 1
        std::cout << arr.back();        // 5

    ===============================================================================================
    std::array - common methods

        std::array<int, 5> arr {1,2,3,4,5};
        std::array<int, 5> arr1 {10,20, 30, 40, 50};

        std::cout << arr.empty();       // 0 = (false)
        std::cout << arr.max_size();    // 5

        arr.swap(arr1);                 // swaps the 2 arrays
        int *data = arr.data();         // get raw array address


*/