// IF STATEMENT

#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int num{};
    const int min{10};
    const int max{100};

    cout << "Enter a number between " << min << " and " << max << ": ";
    cin >> num;

    /*
        Tanpa Block Statement ({}) tetap bisa tetapi tidak akan membuat indentasi otomatis
        dan tidak akan bisa ada 2 Statement, akan muncul WARNING
    */
    if (num >= min) 
        cout << num << " is greater than " << min << endl;
    /*
        Dengan Block Statement ({}), maka bisa muncul indentasi otomatis & 
        bisa lebih dari 1 statement 
    */
    if (num >= min) {
        cout << "\n========= IF STATEMENT 1 =========" << endl;
        cout << num << " is greater than " << min << endl;
        cout << num << " is greater than " << min << endl;

        int diff {num - min};
        cout << num << " is " << diff << " greater than " << min << endl;
    }

    if (num <= max) {
        cout << "\n========= IF STATEMENT 2 =========" << endl;
        cout << num << " is less than or equal to " << max << endl;

        int diff {max - num};
        cout << num << " is " << diff << " less than " << max << endl;
    }

    if (num >= min && num <= max) {
        cout << "\n========= IF STATEMENT 3 =========" << endl;
        cout << num << " is in range " << endl;
        cout << "This means statement 1 and 2 will display" << endl;
    }

    if (num == min || num == max) {
        cout << "\n========= IF STATEMENT 4 =========" << endl;
        cout << num << " is right on boundary" << endl;
        cout << "This means all 4 statement must display" << endl;
    }

    cout << endl;
    return 0;
}