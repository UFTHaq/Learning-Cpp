#include <iostream>
#include <vector>
#include <algorithm>

int global_x {1000};
std::string local {"local  : "};
std::string global {"global : "};
std::string localx {"local x : "};
std::string lambdax {"lambda x: "};

int num_line {};
void garis() {
    num_line++;
    std::cout << "\n== TEST " << num_line << " ===========" << std::endl;
}

// Capture by value
void test1() {
    garis();

    int local_x {100};
    std::cout << "local x : " << local_x << std::endl << std::endl;

    auto lambda = [local_x] () {
        std::cout << local << local_x << std::endl;
        std::cout << global << global_x << std::endl;
    };

    lambda();
}

// Capture by value - mutable
void test2() {
    garis();

    int x {100};
    std::cout << localx << x << std::endl << std::endl;

    auto lambda = [x] () mutable {
        x += 153;
        std::cout << lambdax << x << std::endl;
    };
    lambda();

    std::cout << localx << x << std::endl;
    
    lambda();

    std::cout << localx << x << std::endl;
}

// Capture by reference
void test3() {
    garis();

    int x {100};
    std::cout << "local x : " << x << std::endl << std::endl;

    auto lambda = [&x] () {
        x += 100;
        std::cout << lambdax << x << std::endl;
    };
    lambda();

    std::cout << localx << x << std::endl;
}

// Default capture by value - mutable
void test4() {
    garis();

    int x {100};
    int y {200};
    // int z {300};
    std::cout << "local x : " << x << std::endl;
    std::cout << "local y : " << y << std::endl << std::endl;

    auto lambda = [=] () mutable {
        x += 1;
        y += 2;
        std::cout << "lambda x: " << x << std::endl;
        std::cout << "lambda y: " << y << std::endl;
    };
    lambda();

    std::cout << std::endl;
    std::cout << "local x : " << x << std::endl;
    std::cout << "local y : " << y << std::endl;
}

// Default Capture by reference
void test5() {
    garis();

    int x {100};
    int y {200};
    int z {300};
    std::cout << "local x : " << x << std::endl;
    std::cout << "local y : " << y << std::endl;
    std::cout << "local z : " << z << std::endl << std::endl;

    auto lambda = [&] () {
        x += 10;
        y += 20;
        z += 30;
        std::cout << "lambda x: " << x << std::endl;
        std::cout << "lambda y: " << y << std::endl;
        std::cout << "lambda z: " << z << std::endl;
    };
    lambda();

    std::cout << std::endl;
    std::cout << "local x : " << x << std::endl;
    std::cout << "local y : " << y << std::endl;
    std::cout << "local z : " << z << std::endl;
}

// Default capture by value, capture by reference
void test6() {
    garis();

    int x {100};
    int y {200};
    int z {300};
    std::cout << "local x : " << x << std::endl;
    std::cout << "local y : " << y << std::endl;
    std::cout << "local z : " << z << std::endl << std::endl;

    auto lambda = [=, &y] () mutable {
        x += 100;
        y += 100;
        z += 100;
        std::cout << "lambda x: " << x << std::endl;
        std::cout << "lambda y: " << y << std::endl;
        std::cout << "lambda z: " << z << std::endl;
    };
    lambda();

    std::cout << std::endl;
    std::cout << "local x : " << x << std::endl;
    std::cout << "local y : " << y << std::endl;
    std::cout << "local z : " << z << std::endl;
}

// Default capture by reference, capture x and z by value
void test7() {
    garis();

    int x {100};
    int y {200};
    int z {300};
    std::cout << "local x : " << x << std::endl;
    std::cout << "local y : " << y << std::endl;
    std::cout << "local z : " << z << std::endl << std::endl;

    auto lambda = [&, x, z] () mutable {
        x += 100;
        y += 100;
        z += 100;
        std::cout << "lambda x: " << x << std::endl;
        std::cout << "lambda y: " << y << std::endl;
        std::cout << "lambda z: " << z << std::endl;
    };
    lambda();

    std::cout << std::endl;
    std::cout << "local x : " << x << std::endl;
    std::cout << "local y : " << y << std::endl;
    std::cout << "local z : " << z << std::endl;
}

// used for test8
class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
private:
    std::string name;
    int age;
public:
    Person() = default;
    Person(std::string name, int age) : name{name}, age{age} {}
    Person(const Person &p) = default;
    ~Person() = default;

    void set_name(std::string name) {
        this->name = name;
    }
    std::string get_name() {
        return name;
    }

    void set_age(int age) {
        this->age = age;
    }
    int get_age() {
        return age;
    }

    // lambda
    auto change_person1() {
        return [this] (std::string new_name, int new_age) {name = new_name; age = new_age;};
    }
    auto change_person2() {
        return [=] (std::string new_name, int new_age) {name = new_name, age = new_age;};
    }
    auto change_person3() {
        return [&] (std::string new_name, int new_age) {name = new_name, age = new_age;};
    }
};

std::ostream &operator<<(std::ostream &os, const Person &p) {
    os << "[Person : " << p.name << " : " << p.age << "]";
    return os;
}

/*
Default capture by reference of the current object using [this]

[=]. [&], and [this] are equivalent when capturing an object's 
member variables - all are captured by reference
*/
void test8() {
    garis();

    Person person("Fahmi", 18);
    std::cout << person << "\n" << std::endl;

    // Default capture [this]
    // This is the preferred way
    auto change_person1 = person.change_person1();
    change_person1("Thor", 25);
    std::cout << person << std::endl;

    // Default capture [=]
    // This has been deprecated in C++20
    auto change_person2 = person.change_person2();
    change_person2("Haq", 27);
    std::cout << person << std::endl;

    // Default capture [&]
    auto change_person3 = person.change_person3();
    change_person3("Ukhem", 23);
    std::cout << person << std::endl;
}

// Used for test9
class Lambda {
private:
    int y;
public:
    Lambda(int y) : y{y} {}

    void operator() (int x) const {
        std::cout << x + y << std::endl;
    }
};

// Lambda class equivalence example
void test9() {
    garis();

    int y {100};

    Lambda lambda_1(y);
    auto lambda_2 = [y] (int x) {std::cout << x + y << std::endl;};

    lambda_1(200);
    lambda_2(200);
}

// Class used in the test10 example
class People {
    std::vector<Person> people;
    int max_people;
public:
    People(int max = 10): max_people(max) {}
    People(const People &p) = default;

    void add(std::string name, int age) {
        people.emplace_back(name, age);
    }

    void set_max_people(int max) {
        max_people = max;
    }

    int get_max_people() const {
        return max_people;
    }

    // This method returns a vector of Person objects in people whose age > max_age AND
    // it limits the numbers of persons returned to be <= the member variable max_people.
    // Note: that the lambda in this example captures this, by reference, and by value.
    std::vector<Person> get_people(int max_age) {
        std::vector<Person> result;
        int count {};
        std::copy_if(people.begin(), people.end(), std::back_inserter(result), 
            [this, &count, max_age] (Person &p) {
                return p.get_age() > max_age && ++count <= max_people;
            });
        return result;
    }
};

void test10() {
    garis();

    People friends;
    friends.add("Ukhem", 18);
    friends.add("Fahmi", 21);
    friends.add("Thor", 19);
    friends.add("Haq", 23);
    friends.add("Zuf", 45);

    auto result = friends.get_people(17);
    for (const auto &p : result) {
        std::cout << p << std::endl;
    }

    friends.set_max_people(3);
    result = friends.get_people(17);
    std::cout << std::endl;
    for (const auto &p : result) {
        std::cout << p << std::endl;
    }

    result = friends.get_people(30);
    std::cout << std::endl;
    for (const auto &p : result) {
        std::cout << p << std::endl;
    }
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

    std::cout << std::endl;
    return 0;
}