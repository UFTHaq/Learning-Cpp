#include <iostream>
#include <vector>

int main() {
    
    const int n {3};
    int nums[n] {10,20,30};

    auto sum = [] (int nums[], int n) {
        int a {0};
        for (int i = 0; i < n; i++) {
            a += nums[i];
        }
        return a;
    };

    std::cout << sum(nums, 3) << std::endl;                      // Display 60

    //=============================================================================//
    std::cout << "================" << std::endl;
    int test_score1 {88};
    int test_score2 {75};

    auto bonus = [] (int &score1, int &score2, int bonus_points) {
        score1 += bonus_points;
        score2 += bonus_points;
    };

    bonus(test_score1, test_score2, 5);

    std::cout << "test_score1 : " << test_score1 << std::endl;
    std::cout << "test_score2 : " << test_score2 << std::endl;

    //=============================================================================//
    std::cout << "================" << std::endl;
    test_score1 = 88;
    test_score2 = 75;

    auto bonus2 = [] (int *score1, int *score2, int bonus_points) {
        *score1 += bonus_points;
        *score2 += bonus_points;
    };

    bonus2(&test_score1, &test_score2, 5);
    std::cout << "test_score1 : " << test_score1 << std::endl;
    std::cout << "test_score2 : " << test_score2 << std::endl;

    //=============================================================================//
    std::cout << "================" << std::endl;

    std::vector<int> test_score {93,88,75,68,65};

    auto bonus3 = [] (std::vector<int> &scores, int bonus_points) {
        for (int &i: scores) {
            i += bonus_points;
        }
    };

    bonus3(test_score, 5);
    std::cout << "test_score : { ";
    for (int &i : test_score) {
        std::cout << i << " ";
    }
    std::cout << "}" << std::endl;

    //=============================================================================//
    std::cout << "================" << std::endl;

    int num1 {10};
    float num2 {20.5};

    auto lambda = [] (auto x) {std::cout << x << std::endl;};
    lambda(num1);
    lambda(num2);

    //=============================================================================//
    std::cout << "================" << std::endl;

    std::vector<int> test_score_1 {93, 88, 75, 68, 65};
    std::vector<float> test_score_2 {88.5, 85.5, 75.5, 68.5, 65.5};

    auto bonus5 = [] (auto &test_scores, int bonus_points) {
        for (auto &element: test_scores) {
            element += bonus_points;
        }
    };

    bonus5(test_score_1, 5);
    std::cout << "test_score_1: { ";
    for (int &i : test_score_1) {
        std::cout << i << " ";
    }
    std::cout << "}" << std::endl;
    
    bonus5(test_score_2, 5);
    std::cout << "test_score_2: { ";
    for (int &i : test_score_1) {
        std::cout << i << " ";
    }
    std::cout << "}" << std::endl;

    return 0;
 }