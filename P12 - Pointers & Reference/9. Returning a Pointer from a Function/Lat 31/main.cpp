/*
    Find the Maximun Element in an Array using Pointers

Exercise: Find Maximum Element

Specification:

    Write a C++ function find_max_element that takes an integer array 
and its size as input and returns the maximum element in the array using pointers.

Function Signature:

    int findMaxElement(int* arr, int size);

Input:

    arr: A pointer to the first element of the integer array.
    size: The size of the array.

Output:

    The function should return the maximum element in the array.

Example:

    int arr[] = {12, 45, 67, 23, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
     
    int maxElement = findMaxElement(arr, size);
     
    // maxElement should be 67

Constraints:

    The array will always have at least one element.
    The elements in the array are unique.
*/

#include <iostream>

using namespace std;

int find_max_element(int *arr, int size) {
    int max_Element = *arr;

    for (int i {1}; i < size; i++) {
        if (*(arr + i) > max_Element) {
            max_Element = *(arr + i);
        }
    }
    return max_Element;
}

int main() {
    cout << endl;

    int arr[] {12, 45, 69, 43, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max_Element = find_max_element(arr, size);

    cout << "Max Element in the array: " << max_Element << endl;

    cout << endl;
    return 0;
}
