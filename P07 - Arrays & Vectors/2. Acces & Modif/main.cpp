// ARRAYS

#include <iostream>
using namespace std;

int main() {
    char vokal[] {'a', 'e', 'i', 'o', 'u'};
    cout << "\nThe first vowel is: " << vokal[0] << endl;
    cout << "The last vowel is: " << vokal[4] << endl;

    // Mengubah nilai element array
    double high_temps[] {90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first high temperature is: " << high_temps[0] << endl;
    high_temps[0] = 100.7;
    cout << "The first high tempereture is now: " << high_temps[0] << endl;

    /*
    Jika array tidak diisi, maka dia kan berisi junk/garbage memory.
    Sehingga tiap kali di compile isi dari alamat memory dari array,
    yaitu element index 0, akan berubah ubah alamatnya.
    */
    // int test_score [5];
    // cout << "\nFirst score at index 0: " << test_score[0] << endl;
    // cout << "Second score at index 1: " << test_score[1] << endl;
    // cout << "Third score at index 2: " << test_score[2] << endl;
    // cout << "Fourth score at index 3: " << test_score[3] << endl;
    // cout << "Fifth score at index 4: " << test_score[4] << endl;
    /*
    Penyelesaian minimal agar semua bernilai 0
    */
    int test_score1[5] {};
    cout << "\nFirst score at index 0: " << test_score1[0] << endl;
    cout << "Second score at index 1: " << test_score1[1] << endl;
    cout << "Third score at index 2: " << test_score1[2] << endl;
    cout << "Fourth score at index 3: " << test_score1[3] << endl;
    cout << "Fifth score at index 4: " << test_score1[4] << endl;
    /*
    Penyelesaian dengan diberi nilai
    */
    int test_score2[5] {100, 90, 80, 70, 60};
    cout << "\nFirst score at index 0: " << test_score2[0] << endl;
    cout << "Second score at index 1: " << test_score2[1] << endl;
    cout << "Third score at index 2: " << test_score2[2] << endl;
    cout << "Fourth score at index 3: " << test_score2[3] << endl;
    cout << "Fifth score at index 4: " << test_score2[4] << endl;

    cout << "\nEnter 5 test score: ";
    cin >> test_score2[0];
    cin >> test_score2[1];
    cin >> test_score2[2];
    cin >> test_score2[3];
    cin >> test_score2[4];

    cout << "\nThe updated array is: " << endl;
    cout << "First score at index 0: " << test_score2[0] << endl;
    cout << "Second score at index 1: " << test_score2[1] << endl;
    cout << "Third score at index 2: " << test_score2[2] << endl;
    cout << "Fourth score at index 3: " << test_score2[3] << endl;
    cout << "Fifth score at index 4: " << test_score2[4] << endl;

    cout << "\nNotice what the value of the array name is: " << test_score2 << endl;
    cout << endl;

    return 0;
}