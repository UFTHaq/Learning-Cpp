#include <iostream>
#include <string>

int main() {
    //----WRITE YOUR CODE BELOW THIS LINE----
    int age {0};
    double hourly_wage {23.50};
    std::string name;
    std::cout << "Give me your name and age: \n";
    std::cin >> name;
    std::cin >> age;
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----    

    std::cout << name << " " << age << " " << hourly_wage;
}