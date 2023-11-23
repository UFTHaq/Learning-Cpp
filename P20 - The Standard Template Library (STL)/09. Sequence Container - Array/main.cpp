#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>


void display(const std::array<int, 5> &arr) {
    std::cout << "[ ";
    for (auto &element: arr) {
        std::cout << element << " ";
    }
    std::cout << "]" << std::endl;
}

int num {};
void garis() {
    num++;
    std::cout << "\n== Test " << num << " ================================" << std::endl;
}

void test1() {
    garis();

    std::array<int, 5> arr1 {1,2,3,4,5};
    std::array<int, 5> arr2;

    display(arr1);
    display(arr2);

    arr2 = {10,20,30,40,50};
    display(arr1);
    display(arr2);

    std::cout << "Size of arr1 is: " << arr1.size() << std::endl;
    std::cout << "Size of arr2 is: " << arr2.size() << std::endl;

    arr1[0] = 100;
    arr1.at(1) = 2000;
    display(arr1);

    std::cout << "Front of arr2: " << arr2.front() << std::endl;
    std::cout << "Back of arr2: " << arr2.back() << std::endl;
}

void test2() {
    garis();

    std::array<int, 5> arr1 {1,2,3,4,5};
    std::array<int, 5> arr2 {10,20,30,40,50};

    display(arr1);
    display(arr2);

    arr1.fill(0);

    display(arr1);
    display(arr2);

    arr1.swap(arr2);

    display(arr1);
    display(arr2);
}

void test3() {
    garis();

    std::array<int, 5> arr1 {1,2,3,4,5};

    int *ptr = arr1.data();
    std::cout << ptr << std::endl;
    *ptr = 1000;

    display(arr1);
}

void test4() {
    garis();

    std::array<int, 5> arr1 {2,1,4,5,3};
    display(arr1);

    std::sort(arr1.begin(), arr1.end());
    display(arr1);
}

void test5() {
    garis();
    
    std::array<int, 5> arr1 {2,1,4,5,3};

    std::array<int, 5>::iterator min = std::min_element(arr1.begin(), arr1.end());
    
    auto max = std::max_element(arr1.begin(), arr1.end());

    std::cout << "min: " << *min << " , max: " << *max << std::endl;
}

void test6() {
    garis();

    std::array<int, 5> arr1 {2,1,3,3,5};

    auto adjacent = std::adjacent_find(arr1.begin(), arr1.end());

    if (adjacent != arr1.end()) {
        std::cout << "Adjacent element found with value: " << *adjacent << std::endl;
    } else {
        std::cout << "No adjacent elements found" << std::endl;
    }
}

void test7() {
    garis();

    std::array<int, 5> arr1 {1,2,3,4,5};

    int sum = std::accumulate(arr1.begin(), arr1.end(), 0);
    std::cout << "Sum of the elements in arr1 is: " << sum << std::endl;
}

void test8() {
    garis();

    std::array<int, 10> arr {1,2,3,1,2,3,3,3,3,3};

    int count = std::count(arr.begin(), arr.end(), 3);
    std::cout << "Found 3: " << count << " times " << std::endl;
}

void test9() {
    garis();

    std::array<int, 10> arr {1,2,3,50,60,70,80,200,300,400};
    // find how many numbers between 10 and 200 -> 50,60,70,80

    int count = std::count_if(arr.begin(), arr.end(), [] (int x) {return x > 10 && x < 200;});

    std::cout << "Found " << count << " value matches" << std::endl; 
}

int main() {
    std::cout << std::endl;
    std::cout << (17 + 11 + 16 + 11 + 5 + 14 + 14 + 21 + 7 + 9 + 2) << std::endl;

    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();

    std::cout << std::endl;
    return 0;
}