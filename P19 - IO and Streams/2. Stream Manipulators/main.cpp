/*
    FILES, STREAMS AND I/O
    ====================================================================================
    Stream manilpulators

    - Streams have useful member functions to control formatting

    - Can be used on input and output streams

    - The time of the effect on the stream varies

    - Can be used as member functions as a manipulator

        std::cout.width(10);        // member function
        std::cout << std::setw(10)  // manipulator

    - We'll focus on manipulator usage

    ====================================================================================
    Common Stream Manipulators

    - Boolean
        - Boolalpha, noboolalpha

    - Integer
        - dec, hex, oct, showbase, noshowbase, showpos, noshowpos, uppercase, nouppercase

    - Floating point
        - fixed, scientific, setprecision, showpoint, noshowpoint, showpos, noshowpos

    - Field width, justification and fill
        - setw, left, right, internal, setfill

    - Others
        - endl, flush, skipws, noskipws, ws



*/