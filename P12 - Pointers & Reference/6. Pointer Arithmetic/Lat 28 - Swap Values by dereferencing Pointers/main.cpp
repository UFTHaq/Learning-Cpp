/*
    Swap Values using Pointers

    Write a C++ function swap_pointers_dereferencing that takes two integer pointers 
    as input and swaps the values that they are pointing to. You can use 
    a temporary variable if you wish but try to do it without using any 
    temporary variables.
    
    Function Signature:
        void swap_pointers_dereferencing(int* ptr1, int* ptr2);
    Input:
        ptr1: A pointer to an integer.
        ptr2: A pointer to an integer.
    Output:
        The function should modify the values stored at the memory locations 
        pointed by ptr1 and ptr2, effectively swapping their values.
    Example:
        int a {5};
        int b {10};
        
        int* ptrA = &a;
        int* ptrB = &b;
        
        swap_pointers_dereferencing(ptrA, ptrB);
        
        // After the function call, the values should be swapped.
        // a == 10, b == 5
    Note:
        Assume that both input pointers are valid and point to valid memory locations.
*/

#include <iostream>

void swap_pointers_dereferencing(int *ptr1, int *ptr2);

int main() {
    std::cout << std::endl;

    int a {5};
    int b {10};

    int *int_ptr_A {&a};
    int *int_ptr_B {&b};

    std::cout << "Before Swap" << std::endl;
    std::cout << "int a: " << a << std::endl;
    std::cout << "int b: " << b << std::endl;
    std::cout << "int_ptr_A: " << int_ptr_A << std::endl;
    std::cout << "int_ptr_B: " << int_ptr_B << std::endl;
    std::cout << "int_ptr_A: " << *int_ptr_A << std::endl;
    std::cout << "int_ptr_B: " << *int_ptr_B << std::endl;
    std::cout << std::endl;

    swap_pointers_dereferencing(int_ptr_A, int_ptr_B);

    int_ptr_A = &b;
    int_ptr_B = &a;

    std::cout << "After Swap" << std::endl;
    std::cout << "int a: " << a << std::endl;
    std::cout << "int b: " << b << std::endl;
    std::cout << "int_ptr_A: " << int_ptr_A << std::endl;
    std::cout << "int_ptr_B: " << int_ptr_B << std::endl;
    std::cout << "int_ptr_A: " << *int_ptr_A << std::endl;
    std::cout << "int_ptr_B: " << *int_ptr_B << std::endl;

    std::cout << std::endl;
    return 0;
}

void swap_pointers_dereferencing(int *ptr1, int *ptr2) {
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
}