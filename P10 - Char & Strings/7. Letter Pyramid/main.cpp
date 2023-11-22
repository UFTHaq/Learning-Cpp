/*
    LETTER PYRAMID
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << endl;
    cout << "PIRAMID KATA" << endl;

    std::cout << "Masukkan sebuah kata: ";
    std::string input_string;
    std::getline(std::cin, input_string);

    int length = input_string.length();
    if (length % 2 == 0) {
        input_string += '|'; // Menambahkan karakter '|' jika panjang string genap
        length++;
    }

    for (int i = 0; i < length; i++) {
        // Membuat spasi di awal setiap baris
        for (int j = 0; j < length - i - 1; j++) {
            std::cout << " ";
        }

        // Menampilkan karakter dari kiri ke kanan
        for (int j = 0; j <= i; j++) {
            std::cout << input_string[j];
        }

        // Menampilkan karakter secara terbalik (dari karakter ke-2 terakhir hingga karakter pertama)
        for (int j = i - 1; j >= 0; j--) {
            std::cout << input_string[j];
        }

        // Pindah ke baris berikutnya
        std::cout << std::endl;
    }

    cout << endl;
    return 0;
}