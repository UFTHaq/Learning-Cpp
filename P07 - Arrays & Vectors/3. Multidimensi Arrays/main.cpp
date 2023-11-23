#include <iostream>

int main() {
    int movie_rating[3][4] {
        {0, 4, 3, 5}, {2, 3, 3, 5}, {1, 4, 4, 5}
    };
    int movie_rating2[3][4] {
        {0, 4, 3, 5}, 
        {2, 3, 3, 5}, 
        {1, 4, 4, 5}
    };

    std::cout << movie_rating << std::endl;
    std::cout << movie_rating2 << std::endl;
}