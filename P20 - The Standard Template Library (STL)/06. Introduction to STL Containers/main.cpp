/*
    =========================================================================================
    CONTAINERS

    - Data structure that can store object of almost any type
      - Template-based classes

    - Each container has member funcsions
      - Some are specific to the container
      - Others are available to all containers

    - Each container has an associated header file
      - #include <container_type>

    =========================================================================================
    CONTAINERS - COMMON

    Function                        Description

    Default Constructor             Initializes an empty container
    Overloaded Constructor          Initializes containers with many options
    Copy Concstructor               Initializes a containers as a copy of another container
    Move Constructor                Move existing container to a new container
    Destructor                      Destroys a container
    Copy assignment (operator=)     Copy one container to another
    Move assignment (operator=)     Move one container to another
    size                            Returns the number of elements in the container
    empty                           Returns boolean - is the container empty?
    insert                          Insert an element into the container

    operator< and operator<=        Returns boolean - compare contents of 2 containers
    operator> and operator>=        Returns boolean - compare contents of 2 containers
    operator== and operator!=       Returns boolean - are the contents of 2 containers equal or not
    swap                            Swap the elements of 2 containers
    erase                           Remove element(s) from a container
    clear                           Remove all elements from a container
    begin and end                   Returns iterators to first element or end
    rbegin and rend                 Returns reverse iterators to first element or end
    cbegin and cend                 Returns constant iterators to first element or end
    crbegin and crend               Returns constant reverse iterators to first element or end

    =========================================================================================
    Container elements

    What types of elements can we store in containers?

    - A copy of the element will be stored in the container
      - All primitives OK

    - Element should be
      - Copyable and assignable (copy constructor/copy assignment)
      - Moveable for efficiency (move constructor/move assignment)

    - Ordered associative containers must be able to compare elements
      - operator<, operator==


    
*/

#include <iostream>

int main() {
    std::cout << static_cast<double>(5*60+18)/(2+9+7+21+14+14+5) << std::endl;
    return 0;
}