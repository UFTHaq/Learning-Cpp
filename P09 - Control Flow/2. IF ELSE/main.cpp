// IF ELSE STATEMENT

#include <iostream>
using namespace std;

int main() {
    cout << endl;
    
    int num{};
    const int target{10};

    cout << "Enter a number and i will compare it to " << target << ": ";
    cin >> num;
    cout << "=============================================" << endl;

    if (num >= target) {
        cout << num << " is greater than or equal to " << target << endl;

        int diff{num - target};
        cout << num << " is " << diff << " greater than " << target << endl;
    } else {
        cout << num << " is less than " << target << endl;

        int diff{target - num};
        cout << num << " is " << diff << " less than " << target << endl;
    }

    cout << endl;
    return 0;
} 