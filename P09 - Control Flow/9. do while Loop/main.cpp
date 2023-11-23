// do-while Loop
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << endl;

    char select{};

    do {
        string choose {"You choose "};
        cout << "=============================" << endl;
        cout << "| What Do You Want Me To DO |" << endl;
        cout << "=============================" << endl;
        cout << " 1. Do This" << endl;
        cout << " 2. Do That" << endl;
        cout << " 3. Do Something else" << endl;
        cout << " Q. Quit" << endl;
        cout << endl;
        cout << "Enter your selection: ";
        cin >> select;

        switch (select) {
        case '1':
            cout << choose << select << ", doing this." << endl;
            break;
        case '2':
            cout << choose << select << ", doing that." << endl;
            break;
        case '3':
            cout << choose << select << ", doing something else." << endl;
            break;
        case 'Q':
        case 'q':
            cout << "Selamat Tinggal..";
            break;
        default:
            cout << "Unkown Option - Coba Lagi..." << endl;
        }
        cout << endl;

    } while (select != 'q' && select != 'Q');

    cout << endl;
    return 0;
}