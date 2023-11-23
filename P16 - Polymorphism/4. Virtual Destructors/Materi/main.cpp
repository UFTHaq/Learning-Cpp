/*
    POLYMORPHISM
    =============================================================================================
    Virtual Destructors

    - Problems can happen when we destroy polymorphic objects.

    - If Derived class is destroyed by deleting its storage via the Base class pointer and
      the class  doesn't have virtual destructor. Then the behaviour is undefined in the 
      C++ standard.

    - Derived objects must be destroyed in the correct order starting at the correct destructor.
    
    =============================================================================================
    Virtual Destructors

    - Solution/Rule:
        - If a class has a virtual functions
        - ALWAYS provide a public virtual destructor
        - If Base class destructor is virtual then all Derived class destructors are also virtual

        class Account {
        public:
            virtual void withdraw(double amount);
            virtual ~Account();
        }

*/