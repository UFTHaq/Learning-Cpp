// NESTED LOOPS - HISTOGRAM PROJECT
#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << endl;

    int num_items{};

    cout << "How many data items do you have? ";
    cin >> num_items;

    vector <int> data{};

    for (int i{1}; i <= num_items; i++) {
        int data_item{};
        cout << "Enter data item " << i << ": ";
        cin >> data_item;
        data.push_back(data_item);
    }
    // Displaying the array
    cout << "Your data: [";
    for (auto val: data) {
        cout << val << " ";
    }
    cout << "]" << endl;

    // Displaying Histrogram
    cout << "Display Histogram" << endl;
    for (auto val: data) {
        for (int i{1}; i <= val; i++) {   
            if (i % 5 == 0) {
                cout << "*";
            } else {
                cout << "-";
            }
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}