#include <iostream>

using namespace std;

int main() {
    // Character Type
    cout << "\n----- Character Type -----" << endl;
    char my_initial {'U'};
    cout << "My initial is " << my_initial << endl;

    // Integer Type
    cout << "\n------ Integer Type  ------" << endl;
    unsigned short int exam_score {75};
    cout << "My exam score was " << exam_score << endl;

    int countries_represented {85};
    cout << "There were " << countries_represented << " countries represented in my meeting" << endl;

    long people_in_florida {20610000};
    cout << "There are about " << people_in_florida << " people in Florida" << endl;

    long long people_on_earth {7'600'000'000};
    cout << "There are about " << people_on_earth << " people on earth" << endl;

    long long distance_to_alpha_centauri {9'461'000'000'000};
    cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << " kilometers" << endl;

    // Floating Point Types
    cout << "\n-- Floating Point Types --" << endl;
    float car_payment {401.23};
    cout << "My car payment is Rp" << car_payment << endl;

    double pi {3.14159};
    cout << "Pi is " << pi << endl;

    long double large_amount {2.7e120};
    cout << large_amount << " is a very big number" << endl;

    // Boolean Type
    cout << "\n------ Boolean Type ------" << endl;
    bool game_over {false};
    cout << "The value of game_over is " << game_over << endl;

    // Overflow example
    short value1 {30000};
    short value2 {1000};
    long product {value1 * value2}; // Jika pakai short akan overflow -> long

    cout << "The sum of " << value1 << " and " << value2 << " is " << product << endl;

    return 0;
}