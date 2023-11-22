#include <iostream>

using namespace std;

void pertambahan();
void pengurangan();
void perkalian();
void pembagian();

int main() {
    cout << endl;

    cout << "|=============================|" << endl;
    cout << "|=   Calculator 2 Bilangan   =|" << endl;
    cout << "|=============================|" << endl;
    cout << "| 1. (+) Pertambahan          |" << endl;
    cout << "| 2. (-) Pengurangan          |" << endl;
    cout << "| 3. (x) Perkalian            |" << endl;
    cout << "| 4. (/) Pembagian            |" << endl;
    cout << "|=============================|" << endl;

    char operasi {};
    cout << "| Kamu ingin apa? ";
    cin >> operasi;
    cout << "|=============================|" << endl;

    switch (operasi) {
    case '1':
        pertambahan();
        break;
    case '2':
        pengurangan();
        break;
    case '3':
        perkalian();
        break;
    case '4':
        pembagian();
        break;
    default:
        cout << "| Operasi tersebut tidak ada." << endl;
        break;
    }
    cout << "|=============================|" << endl;

    cout << endl;
    return 0;
}

void pertambahan() {
    double a {};
    double b {};
    cout << "| Operasi Pertambahan" << endl;
    cout << "| Masukkan 2 bilangan yang dipisah spasi: ";
    cin >> a >> b;
    double hasil {a + b};
    cout << "| Hasil pertambahan adalah: " << hasil << endl;   
}

void pengurangan() {
    double a {};
    double b {};
    cout << "| Operasi Pengurangan" << endl;
    cout << "| Masukkan 2 bilangan yang dipisah spasi: ";
    cin >> a >> b;
    double hasil {a - b};
    cout << "| Hasil pengurangan adalah: " << hasil << endl;   
}

void perkalian() {
    double a {};
    double b {};
    cout << "| Operasi Perkalian" << endl;
    cout << "| Masukkan 2 bilangan yang dipisah spasi: ";
    cin >> a >> b;
    double hasil {a * b};
    cout << "| Hasil perkalian adalah: " << hasil << endl;   
}

void pembagian() {
    double a {};
    double b {};
    cout << "| Operasi Pembagian" << endl;
    cout << "| Masukkan 2 bilangan yang dipisah spasi: ";
    cin >> a >> b;
    double hasil {a / b};
    cout << "| Hasil pembagian adalah: " << hasil << endl;   
}