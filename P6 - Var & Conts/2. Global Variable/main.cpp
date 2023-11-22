#include <iostream>


int age {23};           // Deklarasi Global Variable
void global_variable(); // Deklarasi fungsi global_variable

int main() {
    int age {18};       // Deklarasi Lokal Variable
    std::cout << "Local Variable of age: " << age << std::endl;

    global_variable();

    return 0;
}

void global_variable() {
    std::cout << "Global Varaibel of age: " << age << std::endl;
}