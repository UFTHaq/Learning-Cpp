/*
    POLYMORPHISM
    ========================================================================================
    What is using a class as an interface?

    - An Abstract class that has only pure virtal functions

    - These functions provide a general set of services to the user of the class

    - Provided as public

    - Each subclass is free to implement these services as needed

    - Every service (method) must be implemented

    - The service type information is strictly enforced

    ========================================================================================
    A Printable example

    - C++ does not provide true interfaces

    - We use abstract classes and pure virtual functions to achieve it

    - Suppose we want to be able to provide  Printable  support for any object we wish
      without knowing it's implementation at compile time

        std::cout << any_object << std::endl;

        - any_object must conform to the  Printable  interface

    ========================================================================================
    A Printable example

    CONTOH:

        class Printable {           // Abstract class
            friend std::ostream &operator<<(std::ostream &os, const Printable &attribute);
        public:
            // pure virtual function
            virtual void print(std::ostream &os) const = 0;

            virtual ~Printable() {}
            . . .
        };

        std::ostream &operator<<(std::ostream &os, const Printable &attribute) {
            attribute.print(os);
            return os;
        }


        class Any_Class: public Printable {
        public:
            // must override Printable::print()
            virtual void print(std::ostream &os) override {
                os << "Hi from Any_class";
            }
            . . .
        };


        int main() {
            
            Any_class *ptr = new Any_Class();
            std::cout << *ptr << std::endl;

            void function1(Any_Class &obj) {
                std::cout << obj << std::endl;
            }

            void function2(Printable &obj) {
                std::cout << obj << std::endl;
            }

            function1(*ptr);        // "Hi from Any_Class"
            function2(*ptr);        // "Hi frim Any_Class"
            
            return 0;
        }

    ========================================================================================
    A Shape example

        class Shape {
        public:
            virtual void draw() = 0;
            virtual void rotate() = 0;
            virtual ~Shape() {}
            . . .
        };

        class Circle: public Shape {
        public:
            virtual void draw() override {
                // code;
            }
            virtual void rotate() override {
                // code;
            }
            virtual ~Circle() {}
            . . .
        }

    ========================================================================================
    A Shape example

    format name for Interface class using I

        example:
            class I_Shape {
            };

            class I_Player {
            };


    ========================================================================================
    A Shape example

        class I_Shape {
        public:
            virtual void draw() = 0;
            virtual void rotate() = 0;
            virtual ~I_Shape() {}
            . . .
        };

        class Circle: public I_Shape {
        public:
            virtual void draw() override {
                // code
            }
            virtual void rotate() override {
                // code
            }
            virtual ~Circle() {}
        }

*/