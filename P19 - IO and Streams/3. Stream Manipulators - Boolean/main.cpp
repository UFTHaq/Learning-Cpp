#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::endl;

    std::cout << "noboolalpha - default (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "noboolalpha - default (10 == 20): " << (10 == 20) << std::endl;

    // Set to true/false formatting
    std::cout << std::boolalpha;
    std::cout << "\nboolalpha - (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "boolalpha - (10 == 20): " << (10 == 20) << std::endl;
    
    // Setting still says for future boolean insertion
    std::cout << "\nboolalpha - (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "boolalpha - (10 == 20): " << (10 == 20) << std::endl;

    // Toggle to 0/1
    std::cout << std::noboolalpha;
    std::cout << "\nnoboolalpha - (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "noboolalpha - (10 == 20): " << (10 == 20) << std::endl;

    // Set back to true/false using std::cout.setf method
    std::cout.setf(std::ios::boolalpha);
    std::cout << "\nboolalpha - (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "boolalpha - (10 == 20): " << (10 == 20) << std::endl;

    // Resets to default which is 0/1
    std::cout << std::resetiosflags(std::ios::boolalpha);
    std::cout << "\nDefault (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "Default (10 == 20): " << (10 == 20) << std::endl;

    std::cout << std::endl;
    return 0;
}