/*
LATIHAN : 
    DECLARING, INITIALIZING, AND ACCESSING an ARRAY

    Declare an array of 10 integers named arr and initialize the 
    array so that all 10 integers are 0. Then assign 100  to the 
    first element of the array and 1000  to the last element of the array.
*/
#include <iostream>

int main() {
    int arr[10] {};
    arr[0] = 100;
    arr[-1] = 1000;

    return 0;
}