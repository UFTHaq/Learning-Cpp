/*
    THE STL
    ==========================================================================================
    std::list and std::forward_list

    - Sequence containers
    - Non-contigous in memory
    - No direct access to elements
    - Very efficient for inserting and deleting elements once an element is found
    
    ==========================================================================================
    std::list

    #include <list>

    - Dynamic size
      - Lists of elements
      - lists is bidirectional (doubly linked)
    - Direct element access is NOT provided
    - Rapid insertion and deletion of element anywhere in the container (constant time)
    - All iterators available and invalidate when corresponding element is deleted
    
    ==========================================================================================
    std::forward_list

    #include <forward_list>

    - Dynamic size
      - Lists of elements
      - list uni-directional (singly-linked)
      - Less overhead than a std::list
    - Direct element access is NOT provided
    - Rapid insertion and deletion of element anywhere in the container (constant time)
    - Reverse iterators not available. Iterators invalidate when corresponding 
      element is deleted


*/