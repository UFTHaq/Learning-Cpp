#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>         // for std::advance

class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
    std::string name;
    int age;
public:
    Person() : name{"Unknown"}, age{0} {}
    Person(std::string name, int age) : name{name}, age{age} {}

    bool operator<(const Person &rhs) const {
        return this->age < rhs.age;
    }

    bool operator==(const Person &rhs) const {
        return (this->age == rhs.age && this->name == rhs.name);
    }
};

std::ostream &operator<<(std::ostream &os, const Person &p) {
    os << p.name << ":" << p.age;
    return os;
}

template <typename T>
void display(const std::list<T> &l) {
    std::cout << "[ ";
    for (const auto &i : l) {
        std::cout << i << " ";
    }
    std::cout << "]" << std::endl;
}

int num {};
void garis() {
    num++;
    std::cout << "\n== Test " << num << " ===========================================" << std::endl;
}

void test1() {
    garis();

    std::list<int> l1 {1,2,3,4,5};
    display(l1);

    std::list<std::string> l2;
    l2.push_back("Back");
    l2.push_front("Front");
    display(l2);

    std::list<int> l3;
    l3 = {1,2,3,4,5,6,7,8,9,10};
    display(l3);

    std::list<int> l4 (10,100);
    display(l4);
}

void test2() {
    garis();

    std::list<int> l1 {1,2,3,4,5,6,7,8,9,10};
    display(l1);

    std::cout << "Size  : " << l1.size() << std::endl;
    std::cout << "Front : " << l1.front() << std::endl;
    std::cout << "Back  : " << l1.back() << std::endl;

    l1.clear();
    display(l1);
    std::cout << "Size  : " << l1.size() << std::endl;
}

void test3() {
    garis();

    std::list<int> l1 {1,2,3,4,5,6,7,8,9,10};
    display(l1);

    l1.resize(5);
    display(l1);
    
    l1.resize(10);
    display(l1);

    std::list<Person> persons;
    persons.resize(5);              // uses the Person default constuctor
    display(persons);
}

void test4() {
    garis();

    std::list<int> l1 {1,2,3,4,5,6,7,8,9,10};
    display(l1);

    auto it = std::find(l1.begin(), l1.end(), 5);
    if (it != l1.end()) {
        l1.insert(it, 100);
    }
    display(l1);

    std::list<int> l2 {1000,2000,3000};
    l1.insert(it, l2.begin(), l2.end());
    display(l1);

    std::advance(it, -4);       // point to the 100
    std::cout << *it << std::endl;

    l1.erase(it);               // remove the 100 - iterator becomes invalid
    display(l1);
}

void test5() {
    garis();

    std::list<Person> persons {
        {"Fahmi", 23},
        {"Thor", 24},
        {"Haq", 22}
    };
    display(persons);

    std::string name {};
    int age {};
    std::cout << "\nEnter the name of the next person: ";
    getline(std::cin, name);
    std::cout << "Enter their age: ";
    std::cin >> age;

    persons.emplace_back(name, age);
    display(persons);

    // insert zuf before thor
    auto it = std::find(persons.begin(), persons.end(), Person{"Thor", 24});
    if (it != persons.end()) {
        persons.emplace(it, "Zuf", 31);
    }
    display(persons);
}

void test6() {
    garis();
    std::list<Person> persons {
        {"Fahmi", 23},
        {"Thor", 24},
        {"Haq", 22}
    };
    display(persons);

    persons.sort();
    display(persons);
}

int main() {
    std::cout << std::endl;

    test1();
    test2();
    test3();
    test4();
    test5();
    test6();

    std::cout << std::endl;
    return 0;
}