/*
    Declaring, Initializing and Accessing Vectors

    Declare a vector of integers named vec and initialize the 
    vector to 10,20,30,40, and 50. Modify the first element of the 
    vector to be 100 and modify the last element of the vector to be 1000.
    The final vector should then be 100, 20, 30, 40, and 1000.
*/
#include <iostream>
#include <vector>

int main() {

    std::vector <int> vec {10, 20, 30, 40, 50};
    vec.at(0) = 100;
    vec.at(4) = 1000;

    std::cout << vec.at(0) << std::endl;
    std::cout << vec.at(4) << std::endl;

    return 0;
}