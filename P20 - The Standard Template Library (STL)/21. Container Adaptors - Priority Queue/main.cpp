#include <iostream>
#include <queue>

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

// This display the priority queue by
// repetedly topping and popping the priority queue
// it is being passes by value so we don't modify the 
// priority queue being passed in

template <typename T>
void display(std::priority_queue<T> pq) {
    std::cout << "[ ";
    while (!pq.empty()) {
        T element = pq.top();
        pq.pop();
        std::cout << element << " ";
    }
    std::cout << "]" << std::endl;
}

int num {};
void garis() {
    num++;
    std::cout << "\n== Test " << num << " ================================================" << std::endl;
}

void test1() {
    garis();

    std::priority_queue<int> pq;
    for (int i : {3,5,7,12,23,12,4,100,0,3,5,7}) {
        pq.push(i);
    }

    std::cout << "Size : " << pq.size() << std::endl;
    std::cout << "Top  : " << pq.top() << std::endl;

    display(pq);

    pq.pop();
    display(pq);
}

void test2() {
    garis();

    std::priority_queue<Person> persons;
    persons.push(Person{"A", 10});
    persons.push(Person{"B", 1});
    persons.push(Person{"C", 14});
    persons.push(Person{"D", 18});
    persons.push(Person{"E", 7});
    persons.push(Person{"F", 27});

    display(persons);
    persons.pop();
    display(persons);
}

int main() {
    std::cout << std::endl;

    test1();
    test2();

    std::cout << std::endl;
    return 0;
}