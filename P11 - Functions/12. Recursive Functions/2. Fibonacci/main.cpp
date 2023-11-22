#include <iostream>

using namespace std;

unsigned long long fibonacci(unsigned long long n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci (n-1) + fibonacci (n-2);
}

int main() {
    cout << endl;

    cout << fibonacci(5) << endl;
    cout << fibonacci(10) << endl;
    cout << fibonacci(25) << endl;

    cout << endl;
    return 0;
}