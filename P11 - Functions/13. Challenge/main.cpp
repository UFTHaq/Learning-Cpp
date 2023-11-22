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

    Recall the challenge from Section 9 below.
    Your challenge for section 11 is to modularize your solution to the Section 9
    challenge by refactoring your solution so that it uses uses functions

    You decide how to modularize the program.
    You can use my solution which is include in this file, or modularize your solution

    Here are few hints:
        - Create functions for each major function
        - Keep the functions small
        - Remember the Boss/Worker analogy
        - Keep the vector declaration in the main function and pass the vector object
          to any function that requires it.

        DO NOT move the vector object outside main and make it a global variable.

        - You can start by defining a function that displays the menu
        - You can then define a function that reads the selection from the user and 
          returns it in uppercase
        - Create functions for each menu option
        - Create functions that displays the list of numbers, calculates the mean
          and so forth
    
    Take it one functions at a time and take your time.
    If you get frustated, take a break -- this isn's as easy as it looks the first
    time you do it!

    Finally, don't forget to use function prototypes!

    Good luck -- I know you can do it!
*/

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void display_menu();
void get_select_to_upper(char &);
// char get_selection();
void handle_prints_all_elements(const vector<int> &);
void handle_append_a_number(vector<int> &);
void handle_insert_a_number(vector<int> &);
void handle_find(const vector<int> &);
void handle_remove_a_number(vector<int> &);
void handle_clear_all_number(vector<int> &);
void handle_mean_of_list(const vector<int> &);
void handle_smallest_number(const vector<int> &);
void handle_biggest_number(const vector<int> &);
void handle_length_of_list(const vector<int> &);
void handle_unknown_choice();
void handle_quit_app();

void print_list(const vector<int> &);
double calculate_mean(const vector<int> &);
int get_smallest(const vector<int> &);
int get_biggest(const vector<int> &);
bool find(const vector<int> &, int);

int main() {
    cout << endl;
    cout << fixed << setprecision(2);

    vector<int> list_number{1, 3, 5, 7, 9};

    char select {};

    do {
        display_menu();
        get_select_to_upper(select);
        // select = get_selection();

        switch (select) {
        case 'P':
            handle_prints_all_elements(list_number);
            break;
        case 'A':
            handle_append_a_number(list_number);
            break;
        case 'I':
            handle_insert_a_number(list_number);
            break;
        case 'F':
            handle_find(list_number);
            break;
        case 'R':
            handle_remove_a_number(list_number);
            break;
        case 'C':
            handle_clear_all_number(list_number);
            break;
        case 'M':
            handle_mean_of_list(list_number);
            break;
        case 'S':
            handle_smallest_number(list_number);
            break;
        case 'B':
            handle_biggest_number(list_number);
            break;
        case 'L':
            handle_length_of_list(list_number);
            break;
        case 'Q':
            handle_quit_app();
            break;
    
        default:
            handle_unknown_choice();
        }
        cout << "|________________________________________|" << endl;
        cout << endl;

    } while (select != 'Q');

    cout << endl;
    return 0;
}

void display_menu() {
    cout << "==========================================" << endl;
    cout << "||  UFTHaq Vector Managers by Function  ||" << endl;
    cout << "==========================================" << endl;
    cout << "|  P - Print Numbers                     |" << endl;
    cout << "|  A - Append a Number                   |" << endl;
    cout << "|  I - Insert a Number                   |" << endl;
    cout << "|  F - Find a Number                     |" << endl;
    cout << "|  R - Remove a Number                   |" << endl;
    cout << "|  C - Clear All Numbers                 |" << endl;
    cout << "|  M - Display Mean of List              |" << endl;
    cout << "|  S - Display the Smallest Number       |" << endl;
    cout << "|  B - Display the Biggest Number        |" << endl;
    cout << "|  L - Display the Lenght of List        |" << endl;
    cout << "|  Q - QUIT APP                          |" << endl;
    cout << "|----------------------------------------|" << endl;
    cout << "|  Enter your choice: ";
}

void get_select_to_upper(char &select) {
    cin >> select;
    select = toupper(select);
}

// char get_selection() {
//     char selection {};
//     cin >> selection;
//     selection = toupper(selection);
//     return selection;
// }

void handle_prints_all_elements(const vector<int> &list_number) {
    cout << "|  Prints All Elements" << endl;
    if (list_number.empty() == true) {
        cout << "|  List: []" << endl;
    } else {
        print_list(list_number);
    }
}

void handle_append_a_number(vector<int> &list_number) {
    int add_number {};
    cout << "|  Append a Number" << endl;
    cout << "|  Enter a Number, to Add to the list: ";
    cin >> add_number;
    list_number.push_back(add_number);
    cout << "|  " << add_number << " is Added" << endl;
}

void handle_insert_a_number(vector<int> &list_number) {
    int insert {};
    unsigned urutan {};
    cout << "|  Insert a Number" << endl;
    cout << "|  Add a Number, to the list: ";
    cin >> insert;
    cout << "|  Insert a Number at index: ";
    cin >> urutan;
    if (urutan <= list_number.size()) {
        list_number.insert(list_number.begin() + (urutan -1), insert);
    } else {
        cout << "Tidak ada angka pada Index " << urutan << endl;
    }
}

void handle_find(const vector<int> &list_number) {
    int target {};
    cout << "|  Enter the number to find: ";
    cin >> target;

    if (find(list_number, target)) {
        cout << "|  " << target << " was found." << endl;
    } else {
        cout << "|  " << target << " was not found." << endl;
    }
}

void handle_remove_a_number(vector<int> &list_number) {
    unsigned urutan {};
    cout << "|  Remove a Number at index: ";
    cin >> urutan;
    if (urutan <= list_number.size()) {
        cout << "|  " << list_number.at(urutan-1) << " is Removed" << endl;
        list_number.erase(list_number.begin() + (urutan - 1));
    } else {
        cout << "|  Angka urutan " << urutan << " tidak ada" << endl;
    }
}

void handle_clear_all_number(vector<int> &list_number) {
    char clear {};
    cout << "|  Clear All Numbers at List" << endl;
    cout << "|  Are you sure? (Y/N): ";
    cin >> clear;
    if (clear == 'Y' || clear == 'y') {
        list_number.clear();
        cout << "|  [DONE] - Clear List" << endl;
    } else {
        cout << "|  [CANCEL] - To Clear List" << endl;
    }
}

void handle_mean_of_list(const vector<int> &list_number) {
    cout << "|  Display Mean of List" << endl;
    if (list_number.size() == 0) {
        cout << "|  Unable to calculate mean - list is empty." << endl;
    } else {
        cout << "|  Mean: " << calculate_mean(list_number) << endl;
    } 
}

void handle_smallest_number(const vector<int> &list_number) {
    cout << "|  Display the Smallest Number" << endl;
    cout << "|  Smallest Number: " << get_smallest(list_number) << endl;
}

void handle_biggest_number(const vector<int> &list_number) {
    cout << "|  Display the Biggest Number" << endl;
    cout << "|  Biggest Number: " << get_biggest(list_number) << endl;
}

void handle_length_of_list(const vector<int> &list_number) {
    int length {0};
    cout << "|  Display the length of List" << endl;
    length = list_number.size();
    cout << "|  Length of List: " << length << endl;
}

void handle_unknown_choice() {
    cout << "|  Unknown Option - Coba Lagi...         |" << endl;
}

void handle_quit_app() {
    cout << "|  QUIT APP                              |" << endl;
    cout << "==========================================" << endl;
    cout << "||             TERIMA KASIH             ||" << endl;
    cout << "==========================================" << endl;
}

void print_list(const vector<int> &list_number) {
    cout << "|  List: [ ";
    for (auto element: list_number) {
        cout << element << " ";
    }
    cout << "]" << endl;
}

double calculate_mean(const vector<int> &list_number) {
    int total_number {0};
    double mean_value {0};
    for (auto element: list_number) {
        total_number += element;
    }
    mean_value = (static_cast<double> (total_number) / list_number.size());
    return mean_value;
}

int get_smallest(const vector<int> &list_number) {
    int smallest {};
    smallest = list_number.at(0);
    for (auto element: list_number) {
        if (element < smallest) {
            smallest = element;
        } else {
            smallest = smallest;
        }
    }
    return smallest;
}

int get_biggest(const vector<int> &list_number) {
    int biggest {};
    biggest = list_number.at(0);
    for (auto element: list_number) {
        if (element > biggest) {
            biggest = element;
        } else {
            biggest = biggest;
        }
    }
    return biggest;
}

bool find(const vector<int> &list_number, int target) {
    for (auto element: list_number) {
        if (element == target) {
            return true;
        } 
    } return false;
}