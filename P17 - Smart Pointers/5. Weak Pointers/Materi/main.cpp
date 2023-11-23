/*
    SMART POINTERS
    ========================================================================================
    weak_ptr

    - Provides a non-owning "weak" reference

    - weak_ptr<T>
        - Points to an object of type T on the heap.
        - Does not participate in owning relationship.
        - Always created from a shared_ptr.
        - Does NOT increment or decrement reference use count.
        - Used to prevent stong reference cycles which could prevent obejcts from 
          being deleted

    ========================================================================================
    weak_ptr - circular or cyclec refenece

    - A refers to B

    - B refers to A

    - Shared strong ownership prevents heap deallocation

    ========================================================================================
    weak_ptr - circular or cyclec refenece

    - Solution - make one of the pointers non-owning or 'weak'

    - Now heap storage is deallocated properly


*/