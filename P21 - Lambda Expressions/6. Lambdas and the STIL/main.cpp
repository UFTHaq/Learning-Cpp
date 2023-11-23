#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>      // for std::iota

int num_line {};
void garis() {
    num_line++;
    std::cout << "\n=== TEST " << num_line << " ===========================================" << std::endl;
}

// for each - Non modifying sequence operation
// Displays each element of nums.
void test1() {
    garis();

    std::vector<int> nums {10,20,30,40,50};

    std::for_each(nums.begin(), nums.end(), [] (int x) {
        std::cout << x << " ";
    });
    std::cout << std::endl;
}

// is_permutation - Non modifying sequence operation
// Test whether two triangles are equivalent.
void test2() {
    garis();

    struct Point {
        int x;
        int y;
    };

    Point pt1{1, 2};
    Point pt2{4, 3};
    Point pt3{3, 5};
    Point pt4{3, 1};

    std::vector<Point> triangle1{pt1, pt2, pt3};
    std::vector<Point> triangle2{pt2, pt3, pt1};
    std::vector<Point> triangle3{pt1, pt2, pt4};

    // Test whether triangle1 and triangle2 are equivalent
    if (std::is_permutation(triangle1.begin(), triangle1.end(), triangle2.begin(), triangle2.end(), [] (Point lhs, Point rhs) {
        return lhs.x == rhs.x && lhs.y == rhs.y;
    })) {
        std::cout << "Triangle1 and Triangle2 are equivalent!" << std::endl;
    } else {
        std::cout << "Triangle1 and Triangle2 are NOT equivalent!" << std::endl;
    }

    // Test whether triangle1 and triangle3 are equivalent
    if (std::is_permutation(triangle1.begin(), triangle1.end(), triangle3.begin(), triangle3.end(), [] (Point lhs, Point rhs) {
        return lhs.x == rhs.x && lhs.y == rhs.y;
    })) {
        std::cout << "Triangle1 and Triangle3 are equivalent!" << std::endl;
    } else {
        std::cout << "Triangle1 and Triangle3 are NOT equivalent!" << std::endl;
    }
}

// transform - Modifying sequence operation
void test3() {
    garis();

    std::vector<int> test_scores {93,88,75,68,65};
    int bonus_points {5};

    std::transform(test_scores.begin(), test_scores.end(), test_scores.begin(), [bonus_points] (int score) {
        return score += bonus_points;
    });

    // Display updated test_scores
    for (int i: test_scores) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

// remove_if - Modifying sequence operation
void test4() {
    garis();

    std::vector<int> nums {1,2,3,4,5};

    nums.erase(std::remove_if(nums.begin(), nums.end(), [] (int x) {
        return x % 2 == 0;
    }), nums.end());

    // Displays updated nums
    for (auto i : nums) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

// Used for test5
class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
private:
    std::string name;
    int age;
public:
    Person(std::string name, int age) : name{name}, age{age} {}
    Person(const Person &p) : name{p.name}, age{p.age} {}
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
};

std::ostream &operator<<(std::ostream &os, const Person &p) {
    os << "[Person : " << p.name << " : " << p.age << "]";
    return os;
}

// sort - Sorting
void test5() {
    garis();

    Person person1{"Fahmi", 18};
    Person person2{"Ukhem", 22};
    Person person3{"Thor", 25};

    std::vector<Person> persons {person1, person2, person3};
    // Display persons before sorted
    for (auto i: persons) {
        std::cout << i << std::endl;
    }
    std::cout << "\n";

    // Sort persons by name in ascending order
    std::sort(persons.begin(), persons.end(), [] (Person lhs, Person rhs) {
        return lhs.get_name() < rhs.get_name();
    });

    // Display persons sorted by name
    for (auto i: persons) {
        std::cout << i << std::endl;
    }
    std::cout << "\n";

    // Sort persons by age in descending order
    std::sort(persons.begin(), persons.end(), [] (Person lhs, Person rhs) {
        return lhs.get_age() > rhs.get_age();
    });

    // Display persons sorted by age
    for (auto i: persons) {
        std::cout << i << std::endl;
    }
}

// in_between is used for test6
// all_of - Non Modifying sequence operation
bool in_between(const std::vector<int> &nums, int start_value, int end_value) {
    bool result {false};
    result = std::all_of(nums.begin(), nums.end(), [start_value, end_value] (int value) {
        return value >= start_value && value <= end_value;
    });
    return result;
}

void test6() {
    garis();
    std::cout << std::boolalpha;

    std::vector<int> nums (10);
    std::iota(nums.begin(), nums.end(), 1);

    for (int i : nums) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::cout << in_between(nums, 50, 60) << std::endl;
    std::cout << in_between(nums, 1, 10) << std::endl;
    std::cout << in_between(nums, 5, 7) << std::endl;
    std::cout << in_between(nums, -10, 20) << std::endl;
}

// The following classes are used for test7
class Password_Validator {
private:
    char restricted_symbol {'$'};
public:
    bool is_valid(std::string password) {
        return std::all_of(password.begin(), password.end(), [this] (char c) {
            return c != restricted_symbol;
        });
    }
};

class Password_Validator2 {
private:
    std::vector<char> restricted_symbols {'!', '$', '+'};
public:
    bool is_valid(std::string password) {
        return std::all_of(password.begin(), password.end(), [this] (char c) {
            return std::none_of(restricted_symbols.begin(), restricted_symbols.end(), [c] (char symbol) {
                return c == symbol;
            });
        });
    }
};

void test7() {
    garis();

    std::string password {"Hollywood1$"};
    Password_Validator pv1;

    // Test whether password is valid
    if (pv1.is_valid(password)) {
        std::cout << "The password " << password << " is valid" << std::endl;
    } else {
        std::cout << "The password " << password << " is not valid" << std::endl;
    }

    // Test whether new password is valid
    password = "Hollywood1";
    if (pv1.is_valid(password)) {
        std::cout << "The password " << password << " is valid" << std::endl;
    } else {
        std::cout << "The password " << password << " is not valid" << std::endl;
    }
    std::cout << "\n";

    // =================================================================== //
    password = "C++Rock!";
    Password_Validator2 pv2;

    // Test whether password is valid
    if (pv2.is_valid(password)) {
        std::cout << "The password " << password << " is valid" << std::endl;
    } else {
        std::cout << "The password " << password << " is not valid" << std::endl;
    }

    // Test whether new password is valid
    password = "CPlusPlusRocks!";
    if (pv2.is_valid(password)) {
        std::cout << "The password " << password << " is valid" << std::endl;
    } else {
        std::cout << "The password " << password << " is not valid" << std::endl;
    }

    // Test whether new password is valid
    password = "CPlusPlusRocks";
    if (pv2.is_valid(password)) {
        std::cout << "The password " << password << " is valid" << std::endl;
    } else {
        std::cout << "The password " << password << " is not valid" << std::endl;
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

    std::cout << std::endl;
    return 0;
}