// Latihan Mandiri
// CELSIUS TO FAHRENHEIT

// F = (C * 9/5) + 32

#include <iostream>
using namespace std;

int main() {
    cout << endl;


    cout << "CELSIUS TO FARHRENHEIT CONVERTER" << endl;
    cout << "What Celsius today: ";

    double cel;
    cin >> cel;

    double cel_to_fah {(cel * 9/5) + 32};
    cout << cel << "C is: " << cel_to_fah << "F." << endl;

    cout << endl;
    return 0;
}