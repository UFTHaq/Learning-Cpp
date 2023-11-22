// SWITCH STATEMENT - DAY OF THE WEEK
/*
    In this exercise you will write a switch statement that 
    displays the name of the day of the week given the day code. 
    You may use the integer variable named day_code whose value 
    we will change to automatically to test your code. You do 
    NOT need to declare this variable. Given the following day 
    codes, your program should display the day of the week using 
    a cout statement. No '\n' or endl should be used.

            Day Code        Display
            --------        ------------------------
               0            Sunday
               1            Monday
               2            Tuesday
               3            Wednesday
               4            Thursday
               5            Friday
               6            Saturday
             other          Error - illegal day code
*/

#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int day_code{};

    cout << "Enter the day of Code: ";
    cin >> day_code;

    cout << "Day Code        Display" << endl;
    cout << "--------        ------------------------" << endl;

    switch (day_code) {
        case 0:
            cout << "   0            Sunday" << endl;
            break;
        case 1:
            cout << "   1            Monday" << endl;
            break;
        case 2:
            cout << "   2            Tuesday" << endl;
            break;
        case 3:
            cout << "   3            Wednesday" << endl;
            break;
        case 4:
            cout << "   4            Thursday" << endl;
            break;
        case 5:
            cout << "   5            Friday" << endl;
            break;
        case 6:
            cout << "   6            Saturday" << endl;
            break;
        default:
            cout << " other          Error - illegal day code" << endl;
    }

    cout << endl;
    return 0;
}