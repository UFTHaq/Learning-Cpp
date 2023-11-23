/*
    SMART POINTERS
    ====================================================================================
    unique_ptr

    - Simple smart pointer - very efficient!

    - unique_ptr<T>
        - Points to an object of type T on the heap.
        - It is unique - there can only be one unique_ptr<T> pointing to the object
          on the heap.
        - Owns what it points to.
        - Cannot be assigned or copied.
        - CAN be moved.
        - When the pointer is destroyed, what it points to is automatically destroyed.
    
    ====================================================================================
    unique_ptr - creating, initializing and using

    {
        std::unique_ptr<int> p1 {new int {100}};

        std::cout << *p1 << std::endl;              // 100

        *p1 = 200;
        
        std::cout << *p1 << std::endl;              // 200

    }   // automatically deleted
    
    ====================================================================================
    unique_ptr - some other use full methods

    {
        std::unique_ptr<int> p1 {new int {100}};

        std::cout << p1.get() << std::endl;         // 0x556388

        p1.reset();                                 // p1 is now nullptr

        if (p1) {
            std::cout << *p1 << std::endl;          // won't execute
        }

    }   // automatically deleted

    ====================================================================================
    unique_ptr - user defined classes

    {
        std::unique_ptr<Account< p1 {new Account {"Fahmi"}};
        std::cout << *p1 << std::endl;              // display account

        p1->deposit(1000);
        p1->withdraw(500);

    }   // automatically deleted

    ====================================================================================
    unique_ptr - vector and move

    {
        std::vector<std::unique_ptr<int>> vec;

        std::unique_ptr<int> ptr {new int {100}};

        vec.pushback(ptr);                          // Error - copy not allowed

        vec.pushback(std::move(ptr));               // OK
        
    }   // automatically deleted

    ====================================================================================
    unique_ptr - make_unique (C++14)

    {
        std::unique_ptr<int> p1 = make_unique<int> (100);

        std::unique_ptr<Account> p2 = make_unique<Account> ("Fahmi", 5000);

        auto p3 = make_unique<Player> ("Hero", 100, 100);

    }   // automatically deleted

    More efficient - no calls to new or delete



*/