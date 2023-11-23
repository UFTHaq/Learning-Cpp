/*
    SMART POINTERS
    ============================================================================
    What are they?

    - Objects

    - Can only point to heap-allocated memory

    - Automatically call delete when no longer needed

    - Adhere to RAII principles

    - C++ Smart Pointers
        - Unique pointers (unique_ptr)
        - Shared pointers (shared_ptr)
        - Weak pointers (weak_ptr)
        - Auto pointers (auto_ptr)          // DEPRECATED - We will not discuss

    ============================================================================
    What are they?

    - #include <memory>

    - Defined by class templates
        - Wrapper around a raw pointer
        - Overloaded operators
            - Dereference (*)
            - Member selection (->)
            - Pointer arithmetic not supported (++, --, etc.)

        - Can have custom deleters

    ============================================================================
    A simple example

        {
            std::smart_pointer<Some_Class> ptr = . . .

            ptr->method();
            cout << (*ptr) << endl;
        }

        // ptr will be destroyed automatically when no longer needed

    ============================================================================
    RAII - Resource Acquisition Is Initialization

    - Common idiom or pattern used in software design based on container
      object lifetime

    - RAII objects are allocated on the stack

    - Resource Acquisition
        - Open a file
        - Allocate memory
        - Acquire a lock

    - Is Initialization
        - The resource is acquired in a constructor

    - Resource relinquishing
        - Happens in the destructor
            - Close the file
            - Deallocate the memory
            - Release the lock


*/