/*
    THE STANDARD TEMPLATE LIBRARY
    =========================================================================================
    Generic Programming with function templates

    What is a C++ Template?

    - Blueprint
    - Function and class templates
    - Allow plugging-in any data types
    - Compiler generates the appropriate function/class fron the blueprint
    - Generic programming / meta-programming

    =========================================================================================
    Generic Programming with function templates

    - Lets revisit the max function from the last lecture

        int max(int a, int b) {
            return (a > b) ? a : b;
        }

        int x = 100;
        int y = 200;
        
        std::cout << max(x, y);     // display 200

    ---------------------------------------------------------------------
    max function

    - Now suppose we need to determine the max of 2 doubles, and chars

        int max(int a, int b) {
            return (a > b) ? a : b;
        }

        double max(double a, double b) {
            return (a > b) ? a : b;
        }

        char max(char a, char b) {
            return (a > b) ? a : b;
        }

    ---------------------------------------------------------------------
    Max function as a template function

    - We can replace type we want to generalize with a name, say T
    - But now this won't compile

        T max(T a, T b) {
            return (a > b) ? a : b;
        }

    =========================================================================================
    Max function as a template function

    - we need to tell the compiler this is a template function
    - we also need to tell it that T is the template parameter

        template <typename T>
        T max(T a, T b) {
            return (a > b) ? a : b;
        }

    =========================================================================================
    Max function as a template function

    - We may also use class instead of typename

        template <class T>
        T max(T a, T b) {
            return (a > b) ? a : b;
        }

    =========================================================================================
    Max function as a template function

    - Now the compiler can generate the appropriate function from the template
    - Note, this happens at compile-time!

        int a {10};
        int b {20};

        std::cout << max<int>(a, b) << std::endl;

    =========================================================================================
    Max function as a template function

    - Many times the compiler can deduce the type, and the template parameter is not needed
    - Dependeing on the type of a and b, the compiler will figure it out

        std::cout << max<double>(c, d);

        std::cout << max(c, d);

    =========================================================================================
    Max function as a template function

    - And we can use almost any type we need

        char a {'A'};
        char b {'Z'};

        std::cout << max(a, b) << std::endl;

    =========================================================================================
    Max function as a template function

    - Notice the type MUST support the > operator either natively or as an 
      overloaded operator (operator>)

        template <typename T>
        T max(T a, T b) {
            return (a > b) ? a : b;
        }

    =========================================================================================
    Max function as a template function

    - The followng will not compile unless Player overloads operator>

        Player p1{"Hero", 100, 20};
        Player p2{"Enemy", 99, 3};

        std::cout << max<Player>(p1, p2);
    
    =========================================================================================
    Multiple types as template parameters

    - We can have multiple template parameters
    - And their types can be different

        template <typename T1, typename T2>
        void func(T1 a, T2 b) {
            std::cout << a << " " << b;
        }

    =========================================================================================
    Multiple types as template parameters

    - When we use the function we provide the template parameters
    - Often the compiler can deduce them

        func<int, double>(10, 20.2);

        func('A', 12.4);

*/