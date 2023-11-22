// CONDITIONAL OPERATOR
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int num{};

    cout << "==- GANJIL GENAP -==" << endl;
    cout << "Enter an integer: ";
    cin >> num;

    // METODE IF ELSE
    if (num % 2 ==0) {
        cout << num << " is Genap" << endl;
    } else {
        cout << num << " is Ganjil" << endl;
    }

    // METODE CONDITIONAL OPERATOR
    cout << num << " is" << ((num % 2 == 0) ? " Genap" : " Ganjil") << endl;

    // CONTOH LAIN LAGI
    int num1{}, num2{};

    cout << "Enter 2 integers separated by space: ";
    cin >> num1 >> num2;

    if (num1 != num2) {
        cout << "Largest: " << ((num1 > num2) ? num1 : num2) << endl;
        cout << "Smallest: " << ((num1 < num2) ? num1 : num2) << endl;
    } else {
        cout << "The numbers are the same" << endl;
    }

    cout << endl;
    return 0;
}