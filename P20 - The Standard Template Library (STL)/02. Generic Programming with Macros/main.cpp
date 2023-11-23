/*
    THE STANDARD TEMPLATE LIBRARY
    ==================================================================================
    Generic Programming with macros

    - Generiic programming
      "Writing code that works with a variety of types as arguments, as long
      as those argument types meet specific syntactic and semantic requirements",
      - Bjarne Stroustup

    - Macros***beware***

    - Function templates

    - Class templates

    ==================================================================================
    Macros (#define)

    - C++ preprocessor directives
    - No type information
    - Simple substitution

    #define MAX_SIZE 100

    #define PI 3.14159

    ==================================================================================
    Macros (#define)

    #define MAX_SIZE 100
    #define PI 3.14159

    if (num > MAX_SIZE) {
        std::cout << "Too BIG";
    }

    double area = PI * r * r;
    
    ==================================================================================
    Macros (#define)

    #define MAX_SIZE 100            // 100 removed
    #define PI 3.14159              // 3.14159 removed

    if (num > 100) {
        std::cout << "Too BIG";
    }

    double area = 3.14159 * r * r;

    ==================================================================================
    max function

    - Suppose we need a function to determine the max of 2 integers

        int max(int a, int b) {
            return (a>b) ? a : b;
        }

        int x = 100;
        int y = 200;
        std::cout << max(x, y);                 // display 200

    ==================================================================================
    max function

    - Now suppose we need to determine the max of 2 doubles, and 2 chars

        int max(int a, int b) {
            return (a > b) ? a : b;
        }

        double max(double a, double b) {
            return (a > b) ? a : b;
        }

        char max(char a, char b) {
            return (a > b) ? a : b;
        }

    ==================================================================================
    Macros with argument s (#define)

    - We can write a generic macro with arguments instead

        #define MAX(a, b) ((a > b) ? a : b)

        std::cout << MAX(10, 20)    << std::endl;   // 20
        std::cout << MAX(2.4, 3.5)  << std::endl;   // 3.5
        std::cout << MAX('A', 'C')  << std::endl;   // C

    ==================================================================================
    Macros with argument s (#define)

    - We have to be careful with macros

        #define SQUARE(a) a*a

        result = SQUARE(5);         // Expect 25
        result = 5*5                // Get 25

        result = 100/SQUARE(5);     // Expect 4
        result = 100/5*5            // Get 100!

    ==================================================================================
    Macros with argument s (#define)

        #define SQUARE(a) ((a) * (a))   // note the parenthesis

        result = SQUARE(5);             // Expect 25
        result = ((5)*(5));             // Still Get 25

        result = 100/SQUARE(5);         // Expect 4
        result = 100((5)*(5));          // Now we get 4!!


*/