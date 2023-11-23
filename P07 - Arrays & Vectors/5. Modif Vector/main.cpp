#include <iostream>
#include <vector>

using namespace std;

int main() {

    // vector <char> vokals;         // empty
    // vector <char> vokals (5);     // 5 char initialized to 0

    vector <char> vokals {'a', 'e', 'i', 'o', 'u'};
    cout << "\nTest vokals using array syntax: " << endl;
    cout << vokals[0] << endl;
    cout << vokals[4] << endl;
    cout << "\nTest vokals using vector syntax: " << endl;
    cout << vokals.at(0) << endl;
    cout << vokals.at(4) << endl;

    // vector <int> test_scores (3);      // 3 elements all initialized to 0
    // vector <int> test_scores (3, 100); // 3 elements all inittalized to 100

    vector <int> test_scores {100, 98, 89};

    cout << "\nTest scores using array syntax: " << endl;
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;

    cout << "\nTest scores using vector syntax: " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << "\nThere are " << test_scores.size() << " scores in vector" << endl;

    cout << "\nEnter 3 test scores: ";
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);

    cout << "\nUpdated test scores: " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;

    cout << "\nEnter a test score to add to the vector: ";
    int score_to_add {0};
    cin >> score_to_add;
    test_scores.push_back(score_to_add);

    cout << "\nEnter one more test score to add to the vector: ";
    cin >> score_to_add;
    test_scores.push_back(score_to_add);

    cout << "\nTest scores are now: " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;
    cout << "\nThere are now " << test_scores.size() << " score in the vector" << endl;

    // cout << "AAAAAHHHHHHHHHHHH!!" << test_scores[10] << endl;               //no bounce check exception
    // cout << "AHH This cause an exception!" << test_scores.at(10) << endl;   //have bounce check exception

    // Example of a 2D - Vector
    // a vector of vector

    // vector <vector <int>> movie_ratings {{1, 2, 3, 4},{1, 2, 4, 4},{1, 2, 4, 5},};

    vector <vector <int>> movie_ratings {
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5},
    };

    cout << "\nHere are the movie rating for reviewer #1 using array syntax: " << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;

    cout << "\nHere are the movie rating for reviewer #1 using vector syntax: " << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;

    cout << "\nHere are the movie rating for reviewer #2 using array syntax: " << endl;
    cout << movie_ratings[1][0] << endl;
    cout << movie_ratings[1][1] << endl;
    cout << movie_ratings[1][2] << endl;
    cout << movie_ratings[1][3] << endl;

    cout << "\nHere are the movie rating for reviewer #2 using vector syntax: " << endl;
    cout << movie_ratings.at(1).at(0) << endl;
    cout << movie_ratings.at(1).at(1) << endl;
    cout << movie_ratings.at(1).at(2) << endl;
    cout << movie_ratings.at(1).at(3) << endl;

    cout << "\nHere are the movie rating for reviewer #3 using array syntax: " << endl;
    cout << movie_ratings[2][0] << endl;
    cout << movie_ratings[2][1] << endl;
    cout << movie_ratings[2][2] << endl;
    cout << movie_ratings[2][3] << endl;

    cout << "\nHere are the movie rating for reviewer #3 using vector syntax: " << endl;
    cout << movie_ratings.at(2).at(0) << endl;
    cout << movie_ratings.at(2).at(1) << endl;
    cout << movie_ratings.at(2).at(2) << endl;
    cout << movie_ratings.at(2).at(3) << endl;

    cout << endl;
    return 0;
}