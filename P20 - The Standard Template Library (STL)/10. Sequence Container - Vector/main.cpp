#include <iostream>
#include <vector>
#include <algorithm>

class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
    std::string name;
    int age;
public:
    Person() = default;
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

// template function to display any error
template<typename t>
void display(const std::vector<t> &vec) {
    std::cout << "[ ";
    for (const auto &i : vec) {
        std::cout << i << " ";
    }
    std::cout << "]" << std::endl;
}

// Use for_each and a lambda expression to display vector element
void display2(const std::vector<int> &vec) {
    std::cout << "[ ";
    std::for_each(vec.begin(), vec.end(), 
        [] (int x) {std::cout << x << " ";}
    );
    std::cout << "]" << std::endl;
}

int num {};
void garis() {
    num++;
    std::cout << "\n== Test " << num << " =================================" << std::endl;
}

void test1() {
    garis();

    std::vector<int> vec {1,2,3,4,5};
    display(vec);

    vec = {2,4,5,6};
    display2(vec);

    std::vector<int> vec1 (10,100);
    display(vec1);
}

void test2() {
    garis();

    std::vector<int> vec {1,2,3,4,5,6,7,8};
    display(vec);

    std::cout << "\nvec size: " << vec.size() << std::endl;
    std::cout << "vec max size: " << vec.max_size() << std::endl;
    std::cout << "vec capacity: " << vec.capacity() << std::endl;

    vec.push_back(9);
    display(vec);
    std::cout << "\nvec size: " << vec.size() << std::endl;
    std::cout << "vec max size: " << vec.max_size() << std::endl;
    std::cout << "vec capacity: " << vec.capacity() << std::endl;

    vec.shrink_to_fit();    // C++11
    display(vec);
    std::cout << "\nvec size: " << vec.size() << std::endl;
    std::cout << "vec max size: " << vec.max_size() << std::endl;
    std::cout << "vec capacity: " << vec.capacity() << std::endl;

    vec.push_back(0);
    display(vec);
    std::cout << "\nvec size: " << vec.size() << std::endl;
    std::cout << "vec max size: " << vec.max_size() << std::endl;
    std::cout << "vec capacity: " << vec.capacity() << std::endl;

    vec.reserve(100);
    display(vec);
    std::cout << "\nvec size: " << vec.size() << std::endl;
    std::cout << "vec max size: " << vec.max_size() << std::endl;
    std::cout << "vec capacity: " << vec.capacity() << std::endl;
}

void test3() {
    garis();

    std::vector<int> vec {1,2,3,4,5};
    display(vec);

    vec[0] = 100;
    vec.at(1) = 200;
    display(vec);
}

void test4() {
    garis();

    std::vector<Person> stooges;

    Person p1 {"Fahmi", 23};
    display(stooges);

    stooges.push_back(p1);
    display(stooges);

    stooges.push_back(Person{"Thor", 24});
    display(stooges);

    stooges.emplace_back(Person{"Haq", 25});
    display(stooges);
}

void test5() {
    garis();

    std::vector<Person> stooges {
        {"Fahmi", 22},
        {"Thor", 23},
        {"Haq", 24}
    };
    display(stooges);

    std::cout << "\nFront: " << stooges.front() << std::endl;
    std::cout << "Back: " << stooges.back() << std::endl;

    stooges.pop_back();
    display(stooges);
}

void test6() {
    garis();

    std::vector<int> vec {1,2,3,4,5};
    display(vec);

    vec.clear();        // remove all element
    display(vec);

    vec = {1,2,3,4,5,6,7,8,9,10};
    display(vec);

    vec.erase(vec.begin(), vec.begin() + 2);
    display(vec);

    vec = {1,2,3,4,5,6,7,8,9,10};
    // erase all even numbers
    auto iterator = vec.begin();
    while (iterator != vec.end()) {
        if (*iterator % 2 == 0) {
            vec.erase(iterator);
        } else {
            iterator++;
        }
    }
    display(vec);

    vec = {1,2,3,4,5,6,7,8,9,10};
    // erase all odd numbers
    iterator = vec.begin();
    while (iterator != vec.end()) {
        if (*iterator % 2 != 0) {
            vec.erase(iterator);
        } else {
            iterator++;
        }
    }
    display(vec);
}

void test7() {
    garis();

    std::vector<int> vec1 {1,2,3,4,5};
    display(vec1);

    std::vector<int> vec2 {10,20,30,40,50};
    display(vec2);

    std::cout << std::endl;

    vec1.swap(vec2);
    display(vec1);
    display(vec2);
}

void test8() {
    garis();

    std::vector<int> vec1 {1,21,3,40,12};

    display(vec1);
    std::sort(vec1.begin(), vec1.end());
    display(vec1);
}

void test9() {
    garis();
    // std::back_inserter contrust a back-insert iterator that inserts new elements
    // at the end of the container it applied to. It's a special output iterator
    // It's awesome!!! and very efficient
    // There is also a front_inserter we can use with deque and lists
    // Copy one list to another using an iterator and back_inserter

    std::vector<int> vec1 {1,2,3,4,5};
    std::vector<int> vec2 {10,20};

    display(vec1);
    display(vec2);
    std::cout << std::endl;

    std::copy(vec1.begin(), vec1.end(), std::back_inserter(vec2));
    display(vec1);
    display(vec2);
    std::cout << std::endl;

    // Copy_if the element is even

    vec1 = {1,2,3,4,5,6,7,8,9,10};
    vec2 = {10,20};

    std::copy_if(vec1.begin(), vec1.end(), std::back_inserter(vec2), 
        [] (int x) {return x % 2 == 0;});
    display(vec1);
    display(vec2);
}

void test10() {
    garis();

    // transform over 2 ranges
    std::vector<int> vec1 {1,2,3,4,5};
    std::vector<int> vec2 {10,20,30,40,50};
    std::vector<int> vec3;

    // 1*10, 2*20, 3*30, 4*40, 5*50 and store the result in vec3
    std::transform(vec1.begin(), vec1.end(), vec2.begin(), std::back_inserter(vec3), 
        [] (int x, int y) {return x*y;});

    display(vec3);
}    

void test11() {
    garis();

    std::vector<int> vec1 {1,2,3,4,5,6,7,8,9,10};
    std::vector<int> vec2 {100,200,300,400};

    display(vec1);
    display(vec2);
    std::cout << std::endl;

    auto it = std::find(vec1.begin(), vec1.end(), 5);
    if (it != vec1.end()) {
        std::cout << "inserting..." << std::endl;
        vec1.insert(it, vec2.begin(), vec2.end());
    } else {
        std::cout << "Sorry, 5 not found" << std::endl;
    }
    display(vec1);
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
    test8();
    test9();
    test10();
    test11();

    std::cout << std::endl;
    return 0;
}