/*
    L-VALUES & R-VALUES

    L-values
    - Values that have names and are addressable
    - Modifiable if they are not constants

    int x {100};          // x is an l-values
    x = 1000;
    x = 1000 + 20;

    string name;          // name is an l-values
    name = "Ukhem";

    100 = x;              // 100 is NOT an l-values
    (1000 + 20) = x;      // (1000 + 20) is NOT an l-values

    string name;
    "Ukhem" = name;       // "Ukhem" is NOT an l-values

    -----------------------------------------------------------

    R-values
    - A value that's not an l-value
      - on the right-hand side of an assignment expression
      - a literal
      - a temporary which is intended to be non-modifiable

    int x {100};                // 100 is an r-values
    int y = x + 200;            // (x + 200) is an r-values

    string name;
    name = "Ukhem";             // "Ukhem" is an r-values

    int max_num = max(20, 30);  // max(20, 30) is an r-values

    - r-values can be assigned to l-values explicity
    
    int x {100};
    int y {0};

    y = 100;            // r-value 100 assigned to l-value y
    x = x + y;          // r-value (x+y) assigned to l-value x

    - The references we have used are l-value references
      - Because we are referencing l-values

    int x {100};

    int &ref1 = x;     // ref1 is reference to l-value
    ref1 = 1000;

    int &ref2 = 100;   // Error 100 is an r-value

    - The same when we pass-by-reference

    int square(int &n) {
        return n*n;
    }

    int num {10};

    square(num);      // OK
    square(5);        // Error - can't reference r-value 5

*/