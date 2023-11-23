#include <iostream>
#include <map>
#include <set>

void display(const std::map<std::string, std::set<int>> &m) {
    std::cout << "[ ";
    for (const auto &i : m) {
        std::cout << i.first << ": [ ";
        for (const auto &j : i.second) {
            std::cout << j << " ";
        }
        std::cout << "] ";
    }
    std::cout << "] " << std::endl;
}

template <typename T1, typename T2>
void display(const std::map<T1, T2> &m) {
    std::cout << "[ ";
    for (const auto &i : m) {
        std::cout << i.first << ":" << i.second << " ";
    }
    std::cout << "] " << std::endl;
}

int num {};
void garis() {
    num++;
    std::cout << "\n== Test " << num << " ==================================================" << std::endl;
}

void test1() {
    // Maps
    garis();

    std::map<std::string, int> m {
        {"Fahmi", 3},
        {"Thor", 1},
        {"Haq", 2}
    };
    display(m);

    m.insert(std::pair<std::string, int> ("Ukhem", 10));
    display(m);

    m.insert(std::make_pair("Zuf", 5));
    display(m);

    m["Zuft"] = 18;
    display(m);

    m["Zuft"] += 10;
    display(m);

    m.erase("Zuft");
    display(m);

    std::cout << m["Zuf"] << std::endl;

    std::cout << "Count for Haq: " << m.count("Haq") << std::endl;
    std::cout << "Count for Zuf: " << m.count("Zuf") << std::endl;

    auto it = m.find("Thor");
    if (it != m.end()) {
        std::cout << "Found: " << it->first << ":" << it->second << std::endl;
    }

    m.clear();
    display(m);
}

void test2() {
    garis();

    std::map<std::string, std::set<int>> grades{
        {"Fahmi", {100, 90}},
        {"Thor", {94}},
        {"Haq", {80,90,100}}
    };
    display(grades);

    grades["Fahmi"].insert(95);
    display(grades);

    auto it = grades.find("Thor");
    if (it != grades.end()) {
        it->second.insert(1212);
    }
    display(grades);
}


int main() {
    std::cout << std::endl;

    test1();
    test2();

    std::cout << std::endl;
    return 0;
}