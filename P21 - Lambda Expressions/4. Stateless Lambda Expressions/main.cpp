// Stateless lambda expressions
// [] - empty capture lists

#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
private:
    std::string name;
    int age;
public:
    Person(std::string name, int age) : name{name}, age{age} {};
    Person(const Person &p) : name{p.name}, age{p.age} {};
    ~Person() = default;

    std::string get_name() {return name;}
    void set_name(std::string name) {
        this->name = name;
    }

    int get_age() {return age;}
    void set_age(int age) {
        this->age = age;
    }
};

std::ostream &operator<<(std::ostream &os, const Person &p) {
    os << "[Person : [" << p.name << ": " << p.age << "]]";
    return os;
}

int num_line {};
void garis() {
    num_line++;
    std::cout << "\n=== Test " << num_line << " -------------------------------------------" << std::endl;
}

void test1() {
    garis();

    [] () {std::cout << "Hi" << std::endl;}();

    [] (int x) {std::cout << x << std::endl;}(100);

    [] (int x, int y) {std::cout << x + y << std::endl;}(100,200);

    [] (std::string s) {std::cout << s << std::endl;}("Test");
}

// Using values and references as lambda parameters
void test2() {
    garis();

    auto lambda1 = [] () {std::cout << "Hi" << std::endl;};
    lambda1();

    int num1 {100};
    int num2 {250};

    auto lambda2 = [] (int x, int y) {std::cout << x + y << std::endl;};
    lambda2(10,55);
    lambda2(num1, num2);

    auto lambda3 = [] (int &x, int &y) {
        std::cout << "x: " << x << "y: " << y << std::endl; x = 1000, y = 2340;
    };
    lambda3(num1, num2);
    
    std::cout << "num1: " << num1 << " num2: " << num2 << std::endl;
}

void test3() {
    garis();

    Person persons {"Fahmi", 18};
    std::cout << persons << std::endl;

    auto lambda4 = [] (Person p) {std::cout << p << std::endl;};
    lambda4(persons);

    auto lambda5 = [] (const Person &p) {std::cout << p << std::endl;};
    lambda5(persons);

    auto lambda6 = [] (Person &p) {
        p.set_name("Thor");                 // reset name of persons "Fahmi" to "Thor"
        p.set_age(35);                      // reset age of persons (18) to (35)
        std::cout << p << std::endl;
    };
    lambda6(persons);

    std::cout << persons << std::endl;
}

// used for test4
// using std::function as a parameter in C++14 and greater
// void filter_vector(const std::vector<int> &vec, std::function <bool(int)> func) {
// or
// auto as parameter type in C++20
void filter_vector(const std::vector<int> &vec, auto func) {
    std::cout << "[ ";
    for (int i: vec) {
        if (func(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << "]" << std::endl;
}

void test4() {
    garis();

    std::vector<int> nums {10,20,30,40,50,60,70,80,90,100};

    filter_vector(nums, [] (int x) {return x > 50;});

    filter_vector(nums, [] (int x) {return x <= 30;});

    filter_vector(nums, [] (auto x) {return x >= 30 && x <= 60;});
}

// used for test5
auto make_lambda() {
    return [] () {std::cout << "This lambda was made using the make_lambda function!" << std::endl;};
}

// returning a lambda from a function
void test5() {
    garis();

    auto lambda5 = make_lambda();

    lambda5();
}

// using auto in the lambda paramater list
void test6() {
    garis();

    auto lambda6 = [] (auto x, auto y) {
        std::cout << "x: " << x << " y: " << y << std::endl;
    };

    lambda6(10, 20);
    lambda6(100.3, 200);
    lambda6(12.5, 12.54);

    lambda6(Person{"Fahmi", 23}, Person{"Thor", 24});
}

void test7() {
    garis();

    std::vector<Person> persons {
        {"Fahmi", 18},
        {"Thor", 24},
        {"Haq", 35}
    };

    // sort by name
    std::sort(begin(persons), end(persons), [] ( Person &p1,  Person &p2) {
        return p1.get_name() < p2.get_name();
    });
    std::for_each(persons.begin(), persons.end(), [] (const Person &p) {
        std::cout << p << std::endl;
    });
    std::cout << std::endl;

    // sort by age
    std::sort(persons.begin(), persons.end(), [] (Person &p1, Person &p2) {
        return p1.get_age() < p2.get_age();
    });
    std::for_each(begin(persons), end(persons), [] (const Person &p) {
        std::cout << p << std::endl;
    });
}

int main() {
    std::cout << std::endl;

    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();

    std::cout << std::endl;
    return 0;
}