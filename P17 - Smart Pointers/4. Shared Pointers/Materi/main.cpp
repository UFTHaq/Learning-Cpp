/*
    SMART POINTERS
    ===============================================================================
    shared_ptr

    - Provides shared ownership of heap objects

    - shared_ptr<T>
        - Points to an object of type T on the heap
        - It is not unique-there can many shared_ptr pointing to the same object
          oh the heap
        - Establishes shares ownership relationship
        - CAN be assigned an copied
        - CAN be moved
        - Doesn't support managing arrays by default
        - When the use count is zero, the managed object on the heap is destroyed

    ===============================================================================
    shared_ptr

    {
        std::shared_ptr<int> p1 {new int{100}};
        
        std::cout << *p1 << std::endl;              // 100

        *p1 = 200;
        
        std::cout << *p1 << std::endl;              // 200

    }   // automatically deleted

    ===============================================================================
    shared_ptr

    {
        // use_count - the number of shared_ptr objects managing the heap object
        std::shared_ptr<int> p1 {new int {100}};
        std::cout << p1.use_count() << std::endl;   // 1

        std::shared_ptr<int> p2 {p1};               // shared ownership
        std::cout << p1.use_count() << std::endl;   // 2

        p1.reset();         // decrement the use_count; p1 is nulled out
        std::cout << p1.use_count() << std::endl;   // 0
        std::cout << p2.use_count() << std::endl;   // 1

    }   // automatically deleted

    ===============================================================================
    shared_ptr - user defined classes

    {
        std::shared_ptr<Account> p1 {new Account {"Fahmi"}};
        std::cout << *p1 << std::endl;              // display acccount

        p1->deposit(1000);
        p1->withdraw(500);

    }   // automatically deleted

    ===============================================================================
    shared_ptr - user defined classes

    {
        std::vector<std::shared_ptr<int>> vec;

        std::shared_ptr<int> ptr {new int{100}};

        vec.pushback(ptr);                          // OK - copy IS Allowed

        std::cout << ptr.use_count() << std::endl;  // 2

    }   // automatically deleted

    ===============================================================================
    shared_ptr - make_shared (C++11)

    {
        std::shared_ptr<int> p1 = std::make_shared<int> (100);  // use_count: 1
        std::shared_ptr<int> p2 {p1};                           // use_count: 2
        std::shared_ptr<int> p3;
        p3 = p1;                                                // use_count: 3

    }   // automatically deleted

    - Use std::make_shared - it's more efficient!
    - All 3 pointers point to the SAME object on the heap!
    - When the use_count becomes 0 the heap object is deallocated
    


*/