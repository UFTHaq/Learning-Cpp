/*
    FILES, STREAMS AND I/O
    ===========================================================================================
    Formatting floating point types

    - Default when displaying floating point value is:
        - setprecision      : number of digits displayed (6)
        - fixed             : not fixed to a specific number of digits after the decimal point
        - noshowpoint       : trailing zeroes are not displaying
        - nouppercase       : when displaying in scientific notation
        - noshowpos         : no '+' is displayed for positive numbers

    - These manipulators affect all further output to the stream

    ===========================================================================================
    Formatting floating point types - precision

        double num {1234.5678};

        std::cout << num << std::endl;

        // Will display

        1234.57         // Notice precision is 6 and rounding

    ===========================================================================================
    Formatting floating point types - precision

        double num {123456789.987654321};

        std::cout << num << std::endl;

        // Will display

        1.23457e+008    // Notice precision is 6

    ===========================================================================================
    Formatting floating point types - precision

        double num {123456789.987654321};

        std::cout << std::setprecision(9);
        std::cout << num << std::endl;

        // Will display

        123456790       // Note that rounding occurrs

    ===========================================================================================
    Formatting floating point types - fixed

        double num {123456789.987654321};

        std::cout << std::fixed;
        std::cout << num << std::endl;

        // Will display precision 6 from the decimal

        123456789.987654

    ===========================================================================================
    Formatting floating point types - fixed

        double num {123456789.987654321};

        std::cout << std::setprecision(3) << std::fixed;
        std::cout << num << std::endl;

        // Will display precision 3 from the decimal

        123456789.988
        
    ===========================================================================================
    Formatting floating point types - scientific

        double num {123456789.987654321};

        std::cout << std::setprecision(3) << std::scientific;
        std::cout << num << std::endl;

        // Will display precision 3

        1.23e+008
        
    ===========================================================================================
    Formatting floating point types - scientific uppercase

        double num {123456789.987654321};

        std::cout << std::setprecision(3) << std::scientific << std::uppercase;
        std::cout << num << std::endl;

        // Will display precision 3

        1.23E+008       // Note the capital 'E'

    ===========================================================================================
    Formatting floating point types - displaying the positive sign

        double num {123456789.987654321};

        std::cout << std::setprecision(3) << std::fixed << std::showpos;
        std::cout << num << std::endl;

        // Will display

        +123456789.988  // Note the leading '+'
        
    ===========================================================================================
    Formatting floating point types - trailing zeroes

        double num {12.34};

        std::cout << num << std::endl;          // 12.34
        std::cout << std::showpoint
        std::cout << num << std::endl;          // 12.3400

        // Will display

        12.34           // Note no trailing zeroes (default)
        12.3400         // Note trailing zeroes up to precision

    ===========================================================================================
    Returning to general settings

    - unsetf
        std::cout.unsetf(std::ios::scientific | std::iso::fixed);
    or
        std::cout << std::resetiosflags(std::ios::floatfield);

    - Refer to the docs for other set/reset flags


*/