/*
ARITHMETIC OPERATORS

    + Additoin
    - Subtraction
    * Multiplication
    / division
    % modulo or remainder (works only with integers)

    The (+), (-), (*) and (/) operators can work with multiple types (int, double, long, ect)
    The (%) modulo - only for integer types
*/

#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int num1 {200};
    int num2 {100};

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << endl;

    float result {0};
    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;

    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;

    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;

    result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result << endl;

    result = num2 / num1;
    cout << num2 << " / " << num1 << " = " << result << endl;

    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;

    num1 = 10;
    num2 = 3;

    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;

    result = num1 * 9 + num2;
    cout << num1 <<" * 9 + " << num2 << " = " << result << endl;

    cout << 5/10 << endl;

    cout << 5.0/10.00 << endl;

    cout << endl;
    return 0;
}