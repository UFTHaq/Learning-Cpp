#include <iostream>

using namespace std;

// This program will calculate the area of a room in square feet

int main() {

    int length, width, area {0};
    cout << "Give me the length and width of your room: ";
    cin >> length >> width;
    area = length * width;
    cout << "Your room area is: " << area << " square feet" << endl;

    return 0;
}