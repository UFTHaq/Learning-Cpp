#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

// template function to display any deque
template <typename T>
void display(const std::deque<T> &d) {
    std::cout << "[ ";
    for (const auto &i : d) {
        std::cout << i << " ";
    } 
    std::cout << "]" << std::endl;
}

int num {};
void garis() {
    num++;
    std::cout << "\n== Test " << num << " =================================" << std::endl;
}

void enter() {
    std::cout << std::endl;
}

void test1() {
    garis();

    std::deque<int> d {1,2,3,4,5};
    display(d);

    d = {2,4,6};
    display(d);

    std::deque<int> d1(10, 100);
    display(d1);

    d[0] = 100;
    d.at(1) = 200;
    display(d);
}

void test2() {
    garis();

    std::deque<int> d {0,0,0};
    display(d);

    d.push_back(10);
    d.push_back(20);
    display(d);

    d.push_front(100);
    d.push_front(200);
    display(d);

    enter();
    std::cout << "Front: " << d.front() << std::endl;
    std::cout << "Back: " << d.back() << std::endl;
    std::cout << "Size: " << d.size() << std::endl;

    d.pop_back();
    d.pop_front();
    display(d);
}

void test3() {
    // insert all even numbers into the back of a deque and
    // all odd numbers into the front
    garis();

    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    std::deque<int> d;

    for (const auto &i : vec) {
        if (i % 2 == 0) {
            d.push_back(i);
        } else {
            d.push_front(i);
        }
    }
    display(d);
}

void test4() {
    // push front vs back ordering
    garis();

    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    std::deque<int> d;

    for (const auto &i : vec) {
        d.push_front(i);
    }
    display(d);

    d.clear();

    for (const auto &i : vec) {
        d.push_back(i);
    }
    display(d);
}

void test5() {
    // same as test4 but using std::copy
    garis();

    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    std::deque<int> d;

    std::copy(vec.begin(), vec.end(), std::front_inserter(d));
    display(d);

    d.clear();

    std::copy(vec.begin(), vec.end(), std::back_inserter(d));
    display(d);
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