/*
    The Default Constructor

    - Does not expect any arguments
        - Also called the no-args constructor

    - If your write no constuctors at all for a class
        - C++ will generate a Default Constructor that does nothing

    - Called when you instantiate a new object with no arguments

    Contoh:

        Player frank;
        Player *enemy = new Player;
*/

#include <iostream>
#include <string>

class Mobil {
private:
    std::string merek;
    int tahun_produksi;

public:
    Mobil(std::string m, int tahun) {
        merek = m;
        tahun_produksi = tahun;
    }
};

int main() {
    std::cout << std::endl;
    
    Mobil Ukhem("Ferrari", 2025);
    
    std::cout << std::endl;
    return 0;
}