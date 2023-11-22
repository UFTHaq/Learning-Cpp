#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    cout << endl;

    int score {100};
    int *score_ptr {&score};

    cout << "Re-Assign Dereferencing" << endl;
    cout << *score_ptr << endl;

    // re-assigning dereferencing -> mengubah nilai variabel yang ditunjuk
    *score_ptr = 200;

    cout << *score_ptr << endl;
    cout << score << endl;
    cout << endl;

    double high_temp {100.7};
    double low_temp {37.4};
    double *temp_ptr {&high_temp};

    cout << "Re-Assign Pointers" << endl;
    cout << *temp_ptr << endl;
    // re-assigning pointers -> mengubah alamat variable yang ditunjuk
    temp_ptr = &low_temp;
    cout << *temp_ptr << endl;
    cout << endl;

    string name {"Ukhem"};
    string *string_ptr {&name};

    cout << "Re-Assign Variable string" << endl;
    cout << *string_ptr << endl;
    // re-assigning variable value -> mengubah isi variable string name
    name = "Fahmi";
    cout << *string_ptr << endl;
    cout << endl;

    vector<string> stooges {"Ukhem", "Fahmi", "Thoriqul", "Haq"};
    vector<string> *vector_ptr {nullptr};

    vector_ptr = &stooges;

    cout << "First stooge: " << (*vector_ptr).at(0) << endl;

    cout << "Stooges: ";
    for (auto element: *vector_ptr) {
        cout << element << " ";
    }
    cout << endl;

    cout << endl;
    return 0;
}