#include <iostream>
#include <set>

class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
    std::string name;
    int age;
public:
    Person() : name{"No Name"}, age{0} {}
    Person(std::string name, int age) : name{name}, age{age} {}

    bool operator<(const Person &rhs) const {
        return this->age < rhs.age;
    }
    bool operator==(const Person &rhs) const {
        return (this->name == rhs.name && this->age == rhs.age);
    }
};

std::ostream &operator<<(std::ostream &os, const Person &p) {
    os << p.name << ":" << p.age;
    return os;
}

template <typename T>
void display(const std::set<T> &s) {
    std::cout << "[ ";
    for (const auto &i: s) {
        std::cout << i << " ";
    }
    std::cout << "]" << std::endl;
}

int num {};
void garis() {
    num++;
    std::cout << "\n== Test " << num << " ======================================" << std::endl;
}

void test1() {
    garis();

    std::set<int> s {1,4,3,5,2};
    display(s);

    s = {1,2,3,1,1,2,2,3,3,4,5};
    display(s);

    s.insert(0);
    display(s);

    s.insert(10);
    display(s);

    if (s.count(10)) {
        std::cout << "10 is in the set" << std::endl;
    } else {
        std::cout << "10 is NOT in the set" << std::endl;
    }

    auto iterator = s.find(5);
    if (iterator != s.end()) {
        std::cout << "Found: " << *iterator << std::endl;
    }

    s.clear();
    display(s);
}

void test2() {
    garis();

    std::set<Person> persons {
        {"Fahmi", 1},
        {"Thor", 2},
        {"Haq", 3}
    };
    display(persons);

    persons.emplace("Ukhem", 20);
    display(persons);

    persons.emplace("Zuf", 20);         // NO -- 20 already exists
    display(persons);

    auto iterator = persons.find(Person{"Thor", 2});
    if (iterator != persons.end()) {
        persons.erase(iterator);
    }
    display(persons);

    iterator = persons.find(Person("XXXXX", 20));   // will remove ukhem using operator<
    if (iterator != persons.end()) {
        persons.erase(iterator);
    }
    display(persons);

    iterator = persons.find(Person{"Fahmi", 3});
    if (iterator != persons.end()) {
        persons.erase(iterator);
    }
    display(persons);
}

void test3() {
    garis();

    std::set<char> s {'A', 'B', 'C'};
    display(s);

    auto result = s.insert('D');
    display(s);

    std::cout << std::boolalpha;
    std::cout << "first pair - element : " << *(result.first) << std::endl;
    std::cout << "second pair - success: " << result.second << std::endl;

    std::cout << std::endl;

    result = s.insert('A');
    display(s);

    std::cout << std::boolalpha;
    std::cout << "first pair - element : " << *(result.first) << std::endl;
    std::cout << "second pair - success: " << result.second << std::endl;
}

int main() {
    std::cout << std::endl;

    test1();
    test2();
    test3();

    std::cout << std::endl;
    return 0;
}