#include <iostream>
using namespace std;

int main() {
    // initializing
    int num1 {10};
    int num2 {20};
    cout << "\nnum1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    // assignment
    num1 = 100;
    num2 = 200;
    cout << "\nnum1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    num1 = num2;
    cout << "\nnum1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    num1 = num2 = num1/5;
    cout << "\nnum1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    num1 = num2 = 1000;
    cout << "\nnum1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    cout << endl;
    return 0;
}