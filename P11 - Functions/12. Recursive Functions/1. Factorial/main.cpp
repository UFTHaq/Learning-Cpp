#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long n) {
    if (n == 0) {
        return 1;                     // base case
    } 
    return n * factorial(n-1);      // recursive case
}

int main() {
    cout << endl;

    cout << factorial(3) << endl;
    cout << factorial(8) << endl;
    cout << factorial(12) << endl;
    cout << factorial(20) << endl;

    cout << endl;
    return 0;
}