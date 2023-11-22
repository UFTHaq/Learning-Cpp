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