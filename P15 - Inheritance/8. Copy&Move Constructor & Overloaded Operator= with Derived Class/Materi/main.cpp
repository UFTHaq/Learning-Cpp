/*
    INHERITANCE
    =============================================================================================
    Copy & Move Constructor and Overloaded operator=

    - NOT inherit from the Base class

    - You may not need to provide your own
        - Compiler-provided versions may be just fine

    - We can explicitly invoke the Base class versions from the Derived class

    =============================================================================================
    COPY CONSTRUCTOR

    - Can invoke Base COPY CONSTRUCTOR explicitly
        - Derived object 'other' will be sliced

        Derived::Derived(const Derived &other)
            : Base(other), {Derived initialization list} {
                // code
            }

    =============================================================================================
    Example: Copy Constructor

        class Base {
            int value;
        public:
            // same constructor as  previous example

            Base(const Base &other) 
                : value{other.value} {
                    std::cout << "Base Copy Constructor" << std::endl;
                }
        };

        class Derived : public Base {
            int double_value;
        public:
            // same constructor as previous example

            Derived(const Derived &other) 
                : Base(other), double_value {other.double_value} {
                    std::cout << "Derived Copy Constructor" << std::endl;
                }
        };

    =============================================================================================
    operator=
        
        class Base {
            int value;
        public:
            // Same Constructor as previous example
            Base &operator=(const Base &rhs) {
                if (this != &rhs) {
                    value = rhs.value;      // assign
                }
                return *this;
            }
        };

        class Derived: public Base {
            int doubled_value;
        public:
            // Same Constructor as previous example
            Derived &operator=(const Derived &rhs) {
                if (this != &rhs) {
                    Base::operator=(rhs);                   // Assign Base part
                    doubled_value = rhs.doubled_value;      // Assgin Derived part
                }
                return *this;
            }
        };

    =============================================================================================
    Copy & Move Constructor and Overloaded operator=

    - Often you do not need to provide your own

    - If you DO NOT define them in Derived
        - Then the compiler will create them and automatically and call the 
          base class's version

    - If you DO provide Derived versions
        - Then YOU must invode the Base versions explicitly yourself

    - Be careful with raw pointers
        - Especially if Base and Derived each have raw pointers
        - Provide them with deep copy semantics

*/