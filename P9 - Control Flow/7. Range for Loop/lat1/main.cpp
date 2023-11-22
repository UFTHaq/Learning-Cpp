// RANGE-BASED FOR LOOP

#include <iostream>
#include <vector>
#include <array>
using namespace std;


int main() {
    cout << endl;

    int scores[] {100, 90, 97, 88, 85};
    int i{};

    for (int nilai : scores) {
        cout << "scores[" << i << "]: " << nilai << endl;
        i++;
    }
    cout << endl;

    vector <double> temperatures{87.2, 77.1, 82.0, 72.5};

    double average_temp{};
    double running_sum{};

    for (auto temp: temperatures) {
        running_sum += temp;
    }

    average_temp = running_sum / temperatures.size();
    cout << "Average temp: " << average_temp << " F" << endl;

    // Initializer list
    average_temp = 0;
    running_sum = 0;
    int size{};

    for (auto temp: {60.2, 80.1, 90.0, 78.2}) {
        running_sum += temp;
        ++size;
    }
    average_temp = running_sum / size;

    cout << "Average temp: " << average_temp << " F" << endl;
    cout << endl;

    // STRING
    for (auto huruf: "Ukhem") {
        cout << huruf << endl;
    }

    cout << endl;
    return 0;
}