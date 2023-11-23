#include <iostream>

// Template function to calculate the length of an array
template <typename T, size_t N>

size_t arrayLength(T (&arr)[N]) {
    return N;
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    // Calculate the length of myArray using the arrayLength function
    size_t length = arrayLength(myArray);

    std::cout << "Length of myArray is: " << length << std::endl;

    return 0;
}