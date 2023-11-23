#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

// display any vector of integers using range-based for loop
void display(const std::vector<int> &vec) {
    std::cout << "[ ";
    for (const auto &i : vec) {
        std::cout << i << " ";
    }
    std::cout << "]" << std::endl;
}

void test1() {
    std::cout << "=========================" << std::endl;
    std::vector<int> nums1 {1, 2, 3, 4, 5};

    // std::vector<int>::iterator it = nums1.begin();

    auto it = nums1.begin();            // point 1
    std::cout << *it << std::endl;

    it++;                               // point 2
    std::cout << *it << std::endl;

    it += 2;                            // point 4
    std::cout << *it << std::endl;

    it -= 2;                            // point 2
    std::cout << *it << std::endl;

    it = nums1.end() - 1;               // point 5
    std::cout << *it << std::endl;
}
    
// Display all vector elements using an iterator
void test2() {
    std::cout << "=========================" << std::endl;

    std::vector<int> nums1 {1, 2, 3, 4, 5};

    std::vector<int>::iterator it = nums1.begin();
    while (it != nums1.end()) {
        std::cout << *it << std::endl;
        it++;
    }

    // Change all vector element to 0
    it = nums1.begin();
    while (it != nums1.end()) {
        *it = 0;
        it++;
    }

    display(nums1);
}

// Using const iterator
void test3() {
    std::cout << "=========================" << std::endl;
    std::vector<int> nums1 {1, 2, 3, 4, 5};

    std::vector<int>::const_iterator it1 = nums1.cbegin();
    // auto it1 = nums1.cbegin();

    while (it1 != nums1.end()) {
        std::cout << *it1 << std::endl;
        it1++;
    }

    // compiler error when we try to change element
    it1 = nums1.begin();
    while (it1 != nums1.end()) {
        // *it1 = 0                    // compiler error - read only
        it1++;
    }
}

void test4() {
    // more iterators
    // using a reverse iterator
    std::cout << "=========================" << std::endl;
    std::vector<int> vec {1, 2, 3, 4};
    auto it = vec.rbegin();             // reverse iterator over vector of ints start at 4
    while (it != vec.rend()) {
        std::cout << *it << std::endl;
        it++;
    }

    // const reverse iterator over a list
    std::list<std::string> name {"Ukhem", "Fahmi", "Thor"};
    auto it1 = name.crbegin();
    std::cout << *it1 << std::endl;
    it1++;
    std::cout << *it1 << std::endl;

    // iterator over a map
    std::map<std::string, std::string> favorites {
        {"Ukhem", "C++"},
        {"Thor", "Python"},
        {"Haq", "Solidworks"}
    };
    auto it2 = favorites.begin();           // iterator over map of string, string pairs
    while (it2 != favorites.end()) {
        std::cout << it2->first << " : " << it2->second << std::endl;
        it2++;
    }
}

// iterate over a subset of a containter
void test5() {
    std::cout << "=========================" << std::endl;
    std::vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto start = vec.begin() + 2;
    auto finish = vec.end() - 3;

    while (start != finish) {
        std::cout << *start << std::endl;
        start++;
    }
}


int main() {
    std::cout << std::endl;

    test1();
    test2();
    test3();
    test4();
    test5();

    std::cout << std::endl;
    return 0;
}