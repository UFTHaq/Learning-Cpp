/*
    Operator Overloading

    - Using traditional operator such as +, =, *, etc. with user-defined types
    - Allow user defined types to behave similar to built-in types
    - Can make code more readable and writeable
    - Not done automatically (except for the assignment operator)
      They must be explicitly defined

    ------------------------------------------------------------------------------
    What is Operator Overloading?

    Suppose we have Number class that models any number
    - Using functions:
        Number result = multiply(add(a,b), divide(c,d));

    - Using member methods:
        Number result = (a.add(b)).multiply(c.divide(d));

    - Using overloaded operators
        Number result = (a+b)*(c/d);
    ------------------------------------------------------------------------------
    What operators can be overloaded?

    - The majority of C++ operators can be overloaded

    - The following operators cannot be overloaded
    ------------------------------------------------------------------------------
    Some basic rules

    - Precedence and Associativity cannot be changed
    - 'arity' cannot be changed (i.e. can't make the division operator unary)
    - Can't overload operators for primitive type (e.g. int, double, etc.)
    - Can't create new operators
    - [], (), ->, and the assignment operator (=) must be declared as member methods
    - The operators can be declared as member methods or global functions
    ------------------------------------------------------------------------------
    Some examples

    - int                                       - std::string
        a = b + c                                   s1 = s2 + s3
        a < b                                       s1 < s2
        std::cout << a                              std::cout << s1

    - double
        a = b + c                               - Mystring
        a < b                                       s1 = s2 + s3
        std::cout << a                              s1 < s2
                                                    s1 == s2
                                                    std::cout << s1
    
    - long                                      - Player
        a = b + c                                   p1 < p2
        a < b                                       p1 == p2
        std::cout << a                              std::cout << p1
    ------------------------------------------------------------------------------
    Mystring class declaration

        class Mystring {
        private:
            char *str;
        public:
            Mystring();
            Mystring(const char *s);
            Mystring(cosnt Mystring &source);
            ~Mystring();
            void display() const;
            int get_length() const;
            const char *get_str() const;
        };
    
*/