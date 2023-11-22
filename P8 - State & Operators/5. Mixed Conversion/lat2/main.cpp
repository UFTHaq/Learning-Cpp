// MIXED TYPE EXPRESSIONS
/*
    Ask the user to enter 3 integers
    Calculate the sum of the integers then.
    Calculate the average of the 3 integers.

    Display the 3 integers entered
    the sum of the 3 integers and
    the average of the 3 integers.

*/

#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int total {};
    int num1 {};
    int num2 {};
    int num3 {};
    const int count {3};
    double average {0.0};

    cout << "Give me " << count << " number between 1 to 100: ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;
    average = static_cast <double> (total) / count;

    cout << "Num1: " << num1 << ", " << "Num2: " << num2 << ", " << "Num3: " << num3 << endl;
    cout << "Total of " << count << " Integers: " << total << endl;
    cout << "Average: " << average << endl;

    cout << endl;
    return 0;
}