#include <iostream>
using namespace std;

int main() {
    int a = 100;
    a = a + (a*2);
    cout << a << endl;

    int b = 100;
    b += b * 2;
    cout << b << endl;

    return 0;
}