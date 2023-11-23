/*
    POLYMORPHISM
    =====================================================================================
    Pure Virtual Functions and Abstract Classes

    - Abstract class
        - Cannot instantiate objects
        - These classes are used base classes in inheritance hierarchies
        - Often referred to as Abstract Base Classes

    - Concrete class
        - Used to instantiate objects from
        - All their member functions are defined
            - Checking Account, Savings Account
            - Faculty, Staff
            - Enemy, Level Boss

    =====================================================================================
    Pure Virtual Functions and Abstract Classes

    - Abstract base class
        - Too generic to crate objects from
            - Shape, Employee, Account, Player

    - Serves as parent to Derived classes that may have objects

    - Constains at least one pure virtual function

    =====================================================================================
    Pure Virtual Functions and Abstract Classes
    
    - Pure virtual functions
        - Used to make a class absratc

        - Specified with "=0" in its declaration
            
            virtual void function() = 0;    // pure virtual functions

        - Typically do not provide implementations

    =====================================================================================
    Pure Virtual Functions and Abstract Classes
    
    - Pure virtual function
        - Derived classes MUST override the base class

        - If the Derived class doesn't override, then the Derived class is also abstract

        - Used when it doesn't make sense for a base class to have an implementation
            - But concrete classes must implement it

            virtual void draw() = 0;        // Shape
            virtual void defend() = 0;      // Player

    =====================================================================================
    Pure Virtual Functions and Abstract Classes

        class Shape {                       // Abstract class
        private:
            // attributes common to all shapes
        public:
            virtual void draw() = 0;        // pure virtual function
            virtual void rotate() = 0;      // pura virtual function
            virtual ~Shape();
        };

        class Circle: public Shape {
        private:
            // attributes for a circle      // Concrete class
        public:
            virtual void draw() override {
                // code to draw a circle
            }
            virtual void rotate() override {
                // code to rotate a circle
            }
            virtual ~Circle();
        };


    =====================================================================================
    Pure Virtual Functions and Abstract Classes

    Abstract Base class

        - Cannot be instantiated

            Shape shape;                // Error

            Shape *ptr = new Shape();   // Error

        - We can use pointers and references to dynamically refer to concrete classes
          derived from them

            Shape *ptr = new Circle();  // OK
            ptr->draw();                // OK
            ptr->rotate();              // OK

*/