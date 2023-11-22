/*
    PASSING ARRAYS TO FUNCTIONS - PRINT A GUEST LIST

        In this exercise you will create a program that will be used to print the 
    guest_list to an event and then clear the guest_list when the event is over.
        Begin by completing the function prototypes print_guest_list and 
    clear_guest_list which are both passed an array of std::string and a size_t value. 
    Ensure that the array cannot be modified within the print_guest_list function by 
    using the keyword const in the parameter list.
        Now that the function prototypes have been declared, at the bottom of the 
    file define both functions.
        Both the print_guest_list and clear_guest_list functions will be passed the 
    array argument guest_list and the size_t argument guest_list_size which have both 
    been provided to you.
        The print_guest_list function should print the values contained within the 
    guest_list from left to right with each element being printed on a new line. 
    Use a for loop to iterate through the array.
        The clear_guest_list function should replace each element of the array with 
    the string value " ", a single space.  Use a for loop to iterate through the array.
        Now, from the function body of event_guest_list, make the following function 
    calls in this order:
        print_guest_list
        clear_guest_list
        print_guest_list
    
        and passing the array argument guest_list and the size_t argument guest_list_size 
    with each function call.
*/

#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

string print_guest_list(const string[], size_t);
void clear_guest_list(string[], size_t);

int main() {
    cout << endl;

    string guest_list[] {"Larry", "Moe", "Curly"};
    size_t guest_list_size {3};

    print_guest_list(guest_list, guest_list_size);
    clear_guest_list(guest_list, guest_list_size);
    print_guest_list(guest_list, guest_list_size);

    cout << endl;
    return 0;
}

string print_guest_list(const string guest_list[], size_t ukuran) {
    for (size_t i{0}; i < ukuran; i++) {
        cout << guest_list[i] << endl;
    }
    return typeid(guest_list).name();
}

void clear_guest_list(string guest_list[], size_t ukuran) {
    for (size_t i{0}; i < ukuran; i++) {
        guest_list[i] = " ";
    }
}