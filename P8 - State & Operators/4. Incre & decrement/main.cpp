// INCREMENT & DECREMENT OPERATOR

#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int counter {10};
    int result {0};

    // Example 1 - Simple Increment
    cout << "| Example 1 |" << endl;
    cout << "Counter: " << counter << endl;

    counter = counter + 1;
    cout << "Counter: " << counter << endl;

    counter++;
    cout << "Counter: " << counter << endl;

    ++counter;
    cout << "Counter: " << counter << endl;
    cout << endl;

    // Example 2 - Pre Increment
    cout << "| Example 2 |" << endl;
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = ++counter;     // Pre Increment
    cout << "Counter: " << counter << endl;
    cout << "Result : " << result << endl;
    cout << endl;

    // Example 3 - Post Increment
    cout << "| Example 3 |" << endl;
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = 10 + counter++;
    cout << "Counter: " << counter << endl;
    cout << "Result : " << result << endl;
    cout << endl;

    // Example 4
    cout << "| Example 4 |" << endl;
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = ++counter + 10;

    cout << "Counter: " << counter << endl;
    cout << "Result : " << result << endl;
    cout << endl;

    // Example 5
    cout << "| Example 5 |" << endl;
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = counter++ + 10;

    cout << "Counter: " << counter << endl;
    cout << "Result : " << result << endl;

    // // Example 6 - Akan muncul warning undefined
    // cout << "| Example 6 |" << endl;
    // counter = 0;
    // cout << counter++ + ++counter << endl;
    
    cout << endl;
    return 0;
}