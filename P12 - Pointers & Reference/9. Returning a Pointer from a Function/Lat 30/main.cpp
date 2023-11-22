/*
    Passing a Pointer to a Function

Problem Statement:

    Pointers are a fundamental aspect of C++. They allow for flexible and efficient 
programming by giving direct access to memory. You are tasked with writing a function 
that uses a pointer to multiply an integer value.

Write a function:

    void multiply_with_pointer(int* ptr, int multiplier);

Input:

    A pointer to an integer (int* ptr). This integer will be between 1 and 100, inclusive.

    An integer (int multiplier) which is the multiplier. This integer will be between 1 and 100, inclusive.

Output:

    The function should multiply the integer at the memory address that ptr points to by multiplier.

Function signature:

    void multiply_with_pointer(int* ptr, int multiplier);

Constraints:

    All the values are strictly positive and within the integer range specified.
*/

#include <iostream>

using namespace std;

void multiply_with_pointer(int *ptr, int multiplier) {
    *ptr *= multiplier;
    cout << *ptr << endl;
}

int main() {
    cout << endl;

    int a {5};
    int *ptr_a {&a};

    int multiplier {10};

    multiply_with_pointer(ptr_a, multiplier);

    cout << endl;
    return 0;
}