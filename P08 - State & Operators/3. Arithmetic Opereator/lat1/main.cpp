// CONVERT UERO TO USD
// 1 EURO = 1.19 USD

#include <iostream>

using namespace std;

int main() {
    cout << endl;

    const double usd_per_euro {1.19};
    cout << "Welcome to the EUR to USD converter" << endl;
    cout << "Enter the value in EUR : ";

    double euro {0.0};
    double dollar {0.0};

    cin >> euro;

    dollar = euro * usd_per_euro;

    cout << euro << " euro is equal to : $" << dollar << endl;

    cout << endl;
    return 0;
}