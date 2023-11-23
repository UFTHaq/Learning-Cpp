#include <iostream>
using namespace std;


int main() {
    bool fullscreen = false;
    bool hoverover = false;

    size_t icon_index;

    cout << (fullscreen<<1) << endl;
    cout << endl;

    icon_index = (fullscreen<<1) | hoverover;
    cout << icon_index << endl;

    fullscreen = false;
    hoverover = true;

    icon_index = (fullscreen<<1) | hoverover;
    cout << icon_index << endl;

    fullscreen = true;
    hoverover = false;

    icon_index = (fullscreen<<1) | hoverover;
    cout << icon_index << endl;

    fullscreen = true;
    hoverover = true;

    icon_index = (fullscreen<<1) | hoverover;
    cout << icon_index << endl;

    cout << endl;
    int a = 3;
    int b = 2;

    cout << (a | b) << endl;

    return 0;
}