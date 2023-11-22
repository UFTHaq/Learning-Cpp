// CONTOH PASS BY REFERENCE VS PASS BY VALUE

#include <iostream>

using namespace std;
// pass by reference prototypes functions
void scale_number(int &num);
// pass by value prototypes functions
void scale_nomor(int nomor);

int main() {
    cout << endl;

    int number {1000};
    
    // pass by reference implementation
    scale_number(number);
    cout << number << endl;
    
    // pass by value implementation 
    scale_nomor(number);
    cout << number;

    cout << endl;
    return 0;
}
// pass by reference function
void scale_number(int &num) {
    if (num > 100) {
        num = 100;
    }
}
// pass by value function
void scale_nomor(int nomor) {
    if (nomor < 200) {
        nomor = 25;
    }
}