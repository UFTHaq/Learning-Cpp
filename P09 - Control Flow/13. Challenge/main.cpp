// CHALLENGE
/*
    This chanllenge is about using collection (list) of integers and allowing
    the user to select options from a menu to perform operations on the list.

    Main Program:

    P - Print Numbers               
    A - Append a Number             
    I - Insert a Number             
    R - Remove a Number             
    C - Clear All Numbers           
    M - Display Mean of List        
    S - Display the Smallest Number 
    B - Display the Biggest Number  
    L - Display the Lenght of List  
    Q - QUIT 

    Enter your choice:
*/

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    cout << endl;
    cout << fixed << setprecision(2);

    vector<int> list{1, 3, 5, 7, 9};

    char select{};
    char erase{};
    int add_number{};
    int total_numbers{};
    double mean_number{};
    int smallest{};
    int biggest{};
    int length{};
    unsigned urutan{};
    int insert{};

    do {
        cout << "======================================" << endl;
        cout << "||      UFTHaq Vector Managers      ||" << endl;
        cout << "======================================" << endl;
        cout << "|  P - Print Numbers                 |" << endl;
        cout << "|  A - Append a Number               |" << endl;
        cout << "|  I - Insert a Number               |" << endl;
        cout << "|  R - Remove a Number               |" << endl;
        cout << "|  C - Clear All Numbers             |" << endl;
        cout << "|  M - Display Mean of List          |" << endl;
        cout << "|  S - Display the Smallest Number   |" << endl;
        cout << "|  B - Display the Biggest Number    |" << endl;
        cout << "|  L - Display the Lenght of List    |" << endl;
        cout << "|  Q - QUIT                          |" << endl;
        cout << "|------------------------------------|" << endl;
        cout << "|  Enter your choice: ";
        cin >> select;

        switch (select) {
        case 'P':
        case 'p':
            cout << "|  Print All Elements" << endl;
            if (list.empty() == false) {
                cout << "|  List: [ ";
                for (auto element: list) {
                    cout << element << " ";
                }
                cout << "]" << endl;
            } else {
                cout << "|  List: []" << endl;
            }
            break;

        case 'A':
        case 'a':
            cout << "|  Append a Number" << endl;
            cout << "|  Enter a Number, to Add to the list: ";
            cin >> add_number;
            list.push_back(add_number);
            cout << add_number << " is Added" << endl;
            break;

        case 'I':
        case 'i':
            cout << "|  Insert a Number" << endl;
            cout << "|  Add a Number, to the list: ";
            cin >> insert;
            cout << "|  Insert a Number at index: ";
            cin >> urutan;
            if (urutan <= list.size()) {
                list.insert(list.begin() + (urutan - 1), insert);
            } else {
                cout << "Tidak ada angka pada Index " << urutan << endl;
            }
            break;

        case 'R':
        case 'r':
            cout << "|  Remove a Number at index: ";
            cin >> urutan;
            if (urutan <= list.size()) {
                cout << "|  " << list.at(urutan-1) << " is Removed" << endl;
                list.erase(list.begin() + (urutan - 1));
            } else {
                cout << "|  Angka urutan " << urutan << " tidak ada" << endl;
            }
            break;

        case 'C':
        case 'c':
            cout << "|  Delete All Numbers at List" << endl;
            cout << "|  Are you sure? (Y/N): ";
            cin >> erase;
            if (erase == 'Y' || erase == 'y') {
                list.clear();
                cout << "|  [DONE] - Clear List" << endl;
            } else {
                cout << "|  [CANCEL] - To Clear List" << endl;
            }
            break;

        case 'M':
        case 'm':
            total_numbers = 0;
            cout << "|  Display Mean of List" << endl;
            for (auto element: list) {
                total_numbers += element;
            }
            mean_number = (static_cast<double>(total_numbers) / list.size());
            cout << "|  Mean: " << mean_number << endl;
            break;
            
        case 'S':
        case 's':
            cout << "|  Display the Smallest Numbers" << endl;
            smallest = list.at(0);
            for (auto element: list) {
                if (element < smallest) {
                    smallest = element;
                } else {
                    smallest = smallest;
                }
            }
            cout << "|  Smallest Number: " << smallest << endl;
            break;

        case 'B':
        case 'b':
            cout << "|  Display the Biggest Numbers" << endl;
            biggest = list.at(0);
            for (auto element: list) {
                if (element > biggest) {
                    biggest = element;
                } else {
                    biggest = biggest;
                }
            }
            cout << "|  Largest Number: " << biggest << endl;
            break;

        case 'L':
        case 'l':
            cout << "|  Display the Length of List" << endl;
            length = list.size();
            cout << "|  Length of List: " << length << endl;
            break;

        case 'Q':
        case 'q':
            cout << "======================================" << endl;
            cout << "||           TERIMA KASIH           ||" << endl;
            cout << "======================================" << endl;
            break;
        default:
            cout << "|  Unknown Option - Coba Lagi..." << endl;
        }
        cout << "|____________________________________|" << endl;
        cout << endl;

    } while (select != 'Q' && select != 'q');
    
    cout << endl;
    return 0;
}