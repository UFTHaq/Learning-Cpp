/*
    INHERITANCE
    ===========================================================================================
    Passing arguments to base class constructors

    - The Base part of a Derived class must be initalized first

    - How can we control exactly which Base class constructor is used during initialization?

    - We can invoke the whichever Base class constructor we wish in the initialization list
      of the Derived class

    ===========================================================================================
    Passing arguments to base class constructors

        class Base {
        public:
            Base();
            Base(int);

        };

        Derived::Derived(int x) : Base(x), {optional initalizers for Derived} {
            // code
        }

    
    ===========================================================================================
    Example: Constructor and class initialization

        class Base {
            int value;
        public:
            Base(): value{0} {
                std::cout << "Base no-args Constructor" << std::endl;
            }
            Base(int x): value{x} {
                std::cout << "Overloaded int Base Constructor" << std::endl;
            }
            Base(std::string code_name): code{code_name} {
                std::cout << "Overloaded string Base Constructor" << std::endl;
            }
        };

        class Derived: public Base {
            int double_value;
        public:
            Derived(): Base{}, double_value{0} {
                std::cout << "Derived no-args Constructor" << std::endl;
            }
            Derived(int x): Base{x}, double_value{x*2} {
                std::cout << "Overloaded int Derived Constructor" << std::endl;
            }
            Derived(std::string code_name): Base{code_name}, double_value{0} {
                std::cout << "Overloaded string Base Constructor" << std::endl;
            }
        };

    ===========================================================================================

*/