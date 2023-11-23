// CHALLENGE
#include <iostream>
#include <vector>

int main() {

    // Declare 2 empty vector 1D 
    std::vector <int> vector1;
    std::vector <int> vector2;

    // Add 10 and 20 to vector1 dynamically using push_back
    vector1.push_back(10);
    vector1.push_back(20);

    // Display the elements in vector1 using the at() and using size() method
    std::cout << "\nvector1: ";
    std::cout << vector1.at(0) << " ";
    std::cout << vector1.at(1) << std::endl;
    std::cout << "The size of vector1 is: " << vector1.size() << std::endl;

    // Add 100 and 200 to vector2 dynamically using push_back
    vector2.push_back(100);
    vector2.push_back(200);

    // Display the elements in vector2 using the at() and using size() method
    std::cout << "\nvector2: ";
    std::cout << vector2.at(0) << " ";
    std::cout << vector2.at(1) << std::endl;
    std::cout << "The size of vector2 is: " << vector2.size() << std::endl;

    // Declare 1 empty vector 2D: vector of vector.
    std::vector <std::vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    // Display My version
    // std::cout << "\nVector 2D: ";
    // std::cout << vector_2d.at(0).at(0) << " ";
    // std::cout << vector_2d.at(1).at(1) << std::endl;
    // std::cout << "The size of vector 2D is: " << vector_2d.size() << std::endl;

    // Display Tutor Version
    std::cout << "\nVector 2D: " << std::endl;
    std::cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << std::endl;
    std::cout << vector_2d.at(1).at(1) << " " << vector_2d.at(1).at(1) << std::endl;
    std::cout << "The size of vector 2D is: " << vector_2d.size() << std::endl;

    // Change vector1.at(0) to 1000
    vector1.at(0) = 1000;

    // Display the elements in vector_2d using the at() method
    std::cout << "\nVector 2D: " << std::endl;
    std::cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << std::endl;
    std::cout << vector_2d.at(1).at(1) << " " << vector_2d.at(1).at(1) << std::endl;
    std::cout << "The size of vector 2D is: " << vector_2d.size() << std::endl;

    // Display the elements in vector1
    std::cout << "\nvector1: ";
    std::cout << vector1.at(0) << " ";
    std::cout << vector1.at(1) << std::endl;

    return 0;
}