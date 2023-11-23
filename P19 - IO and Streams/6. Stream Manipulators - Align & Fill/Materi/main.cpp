/*
    FILES, STREAMS AND I/O
    =========================================================================================
    Field width, align and fill

    - Default when displaying floating point values is:
        - setw  : not set bt default
        - left  : when no field width 
        - right : when using field width
        - fill  : not set by default - blank space is used

    - Some of these manipulators affect only the next data element put on the stream

    =========================================================================================
    Defaults

        double num {1234.5678};
        std::string hello {"Hello"};

        std::cout << num << hello << std::endl;

        // Will display

        1234.57Hello

    =========================================================================================
    Defaults

        double num {1234.5678};
        std::string hello {"Hello"};

        std::cout << num << std::endl;
        std::cout << hello << std::endl;

        // Will display

        1234.57
        Hello

    =========================================================================================
    Field width - setw

        double num {1234.5678};
        std::string hello {"Hello"};

        std::cout << std::setw(10) << num << hello << std::endl;

        // Will display
        1234567890123456789012345678901234567890
           1234.57Hello

    =========================================================================================
    Field width - setw

        double num {1234.5678};
        std::string hello {"Hello"};

        std::cout << std::set(10) << num 
                  << std::setw(10) << hello 
                  << std::setw(10) << hello << std::endl;

        // Will display
        1234567890123456789012345678901234567890
           123.57      Hello     Hello

    =========================================================================================
    Field width - justification

        double num {1234.5678};
        std::string hello {"Hello"};

        std::cout << std::setw(10)
                  << std::left
                  << num                // only affects num!
                  << hello << std::endl;

        // Will display
        1234567890123456789012345678901234567890
        1234.57   Hello
        
    =========================================================================================
    Field width - setw

        double num {1234.5678};
        std::string hello {"Hello"};

        std::cout << std::setw(10) << num
                  << std::setw(10) << std::right << hello
                  << std::setw(15) << std::right << hello << std::endl;

        // Will display
        1234567890123456789012345678901234567890
           1234.57     Hello          Hello

    =========================================================================================
    Filleng fixed width - setfill

        double num {1234.5678};
        std::string hello {"Hello"};

        std::cout << std::setfill('-');
        std::cout << std::setw(10) << num << hello << std::endl;

        // Will display
        1234567890123456789012345678901234567890
        ---1234.57Hello

    =========================================================================================
    Field width - setw

        double num {1234.5678};
        std::string hello {"Hello"};

        std::cout << std::setfill('*');
        std::cout << std::setw(10) << num
                  << std::setfill('-') << std::setw(10) << hello
                  << std::setw(15) << hello << std::endl;

        // Will display
        1234567890123456789012345678901234567890
        ***1234.57-----Hello----------Hello

*/