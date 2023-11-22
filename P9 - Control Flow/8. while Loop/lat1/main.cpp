// WHILE LOOP

#include <iostream>
using namespace std;

int main() {
    cout << endl;
    // COUNT DOWN
    int num{};
    cout << "Enter a positive integer - start the countdown: ";
    cin >> num;

    while (num > 0) {
        cout << num << endl;
        num--;
    }
    cout << "Meledak!" << endl;
    cout << endl;
    // ===================================================== //
    // COUNT UP
    num = 0;
    cout << "Enter a positive integer to count up to: ";
    cin >> num;

    int i{1};
    while (num >= i) {
        cout << i << endl;
        i++;
    }
    // ===================================================== //
    // INPUT VALIDATION
    int number{};
    cout << "Enter an integer less than 100: ";
    cin >> number;

    while (number >= 100) {
        cout << "Enter an integer less than 100: ";
        cin >> number;
    }
    cout << "NAHH GITU DONG" << endl;
    cout << endl;
    // ===================================================== //
    // BOOLEAN FLAG
    bool done{false};
    int nomor{0};

    while (!done) {
        cout << "Enter an integer between 1 and 5: ";
        cin >> nomor;
        if (nomor <= 1 || nomor >= 5) {
            cout << "Out of range, try again" << endl;
        } else {
            cout << "Nah " << nomor << " bener" << endl;
            done = true;
        }
    }
     
    cout << endl;
    return 0;
}