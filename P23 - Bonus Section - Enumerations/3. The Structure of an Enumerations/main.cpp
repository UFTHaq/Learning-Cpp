#include <iostream>

int main() {

    std::string test {"FAHiFiHAF"};

    int j = test.size();
    for (int i = 0; i < j; i++) {
        if (test[i] != test[j - i - 1]) {
            std::cout << "False" << std::endl;
        } 
    }
    std::cout << "True" << std::endl;
    
    return 0;
}