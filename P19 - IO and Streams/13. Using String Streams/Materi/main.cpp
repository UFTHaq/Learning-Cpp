/*
    FILES, STREAMS AND I/O
    ==========================================================================================
    Using string streams

    - Allow us to read or write from strings in memory much as we would read and write to files

    - Very powerful

    - Very useful for data validation

    ==========================================================================================
    Using string streams

        stringstream, istringstream and ostringstream

    1.  #include <sstream>
    2.  Declare an stringstream, istringstream or ostringstream object
    3.  Connect it to a std::string
    4.  Read/write data from/to the string stream using formatted I/O

    ==========================================================================================
    Reading from a stringstream

        #include <sstream>

        int num {};
        double total {};
        std::string name {};
        std::string info {"Fahmi, 100, 178.5"};

        std::istringstream iss {info};
        iss >> name >> num >> total;

    ==========================================================================================
    Writing to a stringstream

        #include <sstream>

        int num {100};
        double total {1234.5};
        std::string name {"Fahmi"};

        std::ostringstream oss {};
        oss << name << " " << num << " " << total;
        std::cout << oss.str() << std::endl;

    ==========================================================================================
    Validating input with stringstream

        int value {};
        std::string input {};

        std::cout << "Enter an Integer: ";
        std::cin >> input;

        std::stringstream ss {input};
        if (ss > value) {
            std::cout << "An integer was entered";
        } else {
            std::cout << "An integer was Not entered";
        }

    ==========================================================================================

*/