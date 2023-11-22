/*
Declaring Vector

#include <vector>
using namespace std;

vector <char> vokals;
vector <int> test_scores;
*/

#include <iostream>
#include <vector>


int main() {

    std::vector <char> vokals (5);
    std::vector <int> test_scores (10);

    std::vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    std::vector <int> test_scores2 {100, 98, 89, 85, 93};
    std::vector <double> high_temps (365, 80.0);
    
    return 0;
}