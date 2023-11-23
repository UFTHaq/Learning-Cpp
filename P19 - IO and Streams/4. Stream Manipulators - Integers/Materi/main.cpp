/*
    FILES, STREAMS AND I/O
    ====================================================================================
    Formatting integers types

    - Default when displaying integer values is:
        - dec (base 10)
        - noshowbase - prefix used to show hexadecimal or octal
        - nouppercase - when displaying a prefix and hex values it will be lower case
        - noshowpos - no '+' is displayed for positive numbers

    - These manipulators affect all further output to the stream

    ====================================================================================
    Formatting integers types - setting base

        int num {255};
        
        std::cout << std::dec << num << std::endl;
        std::cout << std::hex << num << std::endl;
        std::cout << std::oct << num << std::endl;

        // will display
        255
        ff
        377

    ====================================================================================
    Formatting integers types - showing the base

        int num {255};

        std::cout << std::showbase;             // toggle back using std::noshowbase
        
        std::cout << std::dec << num << std::endl;
        std::cout << std::hex << num << std::endl;
        std::cout << std::oct << num << std::endl;

        // will display
        255
        0xff        // note the 0x prefix for hexadecimal
        0377        // note the 0 prefix for octal

    ====================================================================================
    Formatting integers types - showing the base

        int num {255};

        std::cout << std::showbase << std::uppercase;
        std::cout << std::hex << num << std::endl;

        // will display
        0XFF        // note capilatized XFF

    ====================================================================================
    Formatting integers types - displaying the positive sign

        int num1 {255};
        int num2 {-255};

        std::cout << num1 << std::endl;         // 255
        std::cout << num2 << std::endl;         // -255

        std::cout << std::showpos;              // std::noshowpos

        std::cout << num1 << std::endl;         // +255
        std::cout << num2 << std::endl;         // -255

    ====================================================================================
    Setting/resetting integer types

    - Set using setf
        std::cout.setf(std::ios::showbase);
        std::cout.setf(std::ios::uppercase);
        std::cout.setf(std::ios::showpos);

    - Reset to defaults
        std::cout << std::resetiosflags(std::ios::basefield);
        std::cout << std::resetiosflags(std::ios::showbase);
        std::cout << std::resetiosflags(std::ios::showpos);
        std::cout << std::resetiosflags(std::ios::uppercase);



*/