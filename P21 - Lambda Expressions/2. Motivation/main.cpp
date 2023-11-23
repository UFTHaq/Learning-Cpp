#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

struct Square_Functor {
    void operator() (int x) {
        std::cout << x * x << " ";
    }
};

template <typename T>
struct Displayer {
    void operator() (const T &data) {
        std::cout << data << " ";
    }
};

class Multiplier {
private:
    int num {};
public:
    Multiplier(int x) : num{x} {}
    int operator() (int a) const {
        return a * num;
    }
};

int line_num {};
void garis() {
    line_num++;
    std::cout << "\n== Test " << line_num << " ================================================" << std::endl;
}

void test1() {
    garis();

    Square_Functor square;
    square(4);              // square.operator()(4)     // display 16

    Displayer<int> d1;
    Displayer<std::string> d2;
    d1(100);                // display 100
    d2("Fahmi");            // display Fahmi
    std::cout << std::endl;
}

void test2() {
    garis();
    Square_Functor square;

    std::vector<int> vec1 {1,2,3,4,5};
    std::vector<std::string> vec2 {"Fahmi", "Thor", "Haq"};

    std::for_each(vec1.begin(), vec1.end(), square);
    std::cout << std::endl;

    std::for_each(vec1.begin(), vec1.end(), Displayer<int>());
    std::cout << std::endl;

    Displayer<int> d1;
    std::for_each(vec1.begin(), vec1.end(), d1);
    std::cout << std::endl;

    std::for_each(vec2.begin(), vec2.end(), Displayer<std::string>());
    std::cout << std::endl;

    Displayer<std::string> d2;
    std::for_each(vec2.begin(), vec2.end(), d2);
    std::cout << std::endl;
}

void test3() {
    garis();

    std::vector<int> vec1 {1,2,3,4,5};
    std::vector<std::string> vec2 {"Fahmi", "Thor", "Haq"};

    std::for_each(vec1.begin(), vec1.end(), [] (int x) {std::cout << x*x << " ";});
    std::cout << std::endl;

    std::for_each(vec1.begin(), vec1.end(), [] (int x) {std::cout << x*10 << " ";});
    std::cout << std::endl;

    std::for_each(vec1.begin(), vec1.end(), [] (int x) {std::cout << x << " ";});
    std::cout << std::endl;

    std::for_each(vec2.begin(), vec2.end(), [] (std::string x) {std::cout << x << " ";});
    std::cout << std::endl;
}

void test4() {
    garis();
    Displayer<int> d1;

    Multiplier mult(111);
    std::vector<int> vec1;
    vec1 = {1,2,3,4};

    // Transform change the vector!
    std::transform(vec1.begin(), vec1.end(), vec1.begin(), mult);
    std::for_each(vec1.begin(), vec1.end(), d1);
    std::cout << std::endl;

    vec1 = {1,2,3,4};
    std::transform(vec1.begin(), vec1.end(), vec1.begin(), [] (int x) {return x*100;});
    std::for_each(vec1.begin(), vec1.end(), [] (int x) {std::cout << x << " ";});
    std::cout << std::endl;
}

int main() {
    std::cout << std::endl;

    test1();
    test2();
    test3();
    test4();

    std::cout << std::endl;
    return 0;
}