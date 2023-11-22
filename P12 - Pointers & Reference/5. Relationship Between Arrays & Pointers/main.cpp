#include <iostream>

using namespace std;

int main() {
    cout << endl;

    int scores[] {100, 95, 89};

    cout << "Value of scores: " << scores << endl;

    int *score_ptr {scores};
    cout << "Value of score_ptr: " << score_ptr << endl;
    cout << "Value of score_ptr: " << score_ptr + 1 << endl;
    cout << "Value of score_ptr: " << score_ptr + 2 << endl;
    cout << endl;

    cout << "Array subscript notation -------------" << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;
    cout << endl;

    cout << "Pointer subscript notation -----------" << endl;
    cout << score_ptr[0] << endl;
    cout << score_ptr[1] << endl;
    cout << score_ptr[2] << endl;
    cout << endl;

    cout << "Pointer offset notation --------------" << endl;
    cout << *score_ptr << endl;
    cout << *(score_ptr + 1) << endl;
    cout << *(score_ptr + 2) << endl;
    cout << endl;

    cout << "Array offset notation ----------------" << endl;
    cout << *scores << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;

    cout << endl;
    return 0;
}