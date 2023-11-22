// RANGE BASED FOR LOOP
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    cout << endl;

    // Built-in array
    int scores[] {10, 20, 30};
    for (auto score: scores) {
        cout << score << endl;
    }

    // vector
    vector <double> temperatures{33.2, 34.5, 35.8, 29.9};
    double average_temp{};
    double total_temps{};
    for (auto temp: temperatures) {
        total_temps += temp;
    }
    if (temperatures.size() != 0) {
        average_temp = total_temps / temperatures.size();
    }
    cout << fixed << setprecision(1);
    cout << "Average temperature is " << average_temp << "C" << endl;

    // initializer
    for (auto val: {1,2,3,4,5}) {
        cout << val << " ";
    }
    cout << endl;

    // C Style String
    for (auto huruf: "This is a test") {
        if (huruf != ' ') {
            cout << huruf;
        }
    }
    cout << endl;
    for (auto huruf: "This is a test") {
        if (huruf != ' ') {
            cout << huruf;
        } else {
            cout << "\t"; // "\t" -> tab / 4 spasi
        }
    }

    cout << endl;
    return 0;
}