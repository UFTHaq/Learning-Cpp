#include <iostream>

using namespace std;

int main() {
    cout << endl;

    int *p;

    cout << "Value of p is: " << p << endl;
    cout << "Address of p is: " << &p << endl;
    cout << "sizeof of p is: " << sizeof p << endl;
    
    p = nullptr;
    
    cout << "Value of p is: " << p << endl;

    cout << endl;
    return 0;
}