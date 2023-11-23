/*
    INHERITANCE - ROAR LION, ROAR!

    The zoo management system you're working on currently has an abstract base class Animal,
    defined in the Animal.h header file. This class contains two pure virtual methods:
    - get_noise()       : Returns a stirng representing the noise that the animal makes.
    - get_num_legs()    : Returns an integer representing the number of legs the animal has.

    The Animal class defined as follows:

        class Animal {
        public:
            virtual std::string get_noise() = 0;    // pure virtual function
            virtual int get_num_legs() = 0;         // pure virtual function
        };

    Your task is to declare a Lion class that inherits from Animal, in a new file called Lion.h.
    You need to override the get_noise() and get_num_legs() methods:
    - get_noise()       : Should return the string "Roar".
    - get_num_legs()    : Should return the integer 4.
    
    You should then implement these methods in the Lion.cpp file.

    Input Format
        There is no input for this task.
    
    Constraints
        The Lion class must inherit from the Animal class and correctly override the pure virtual
        methods.

    How am I testing this Coding Exercise?
    I will create a new Lion object and call the get_noise() and get_num_legs() methods and 
    i expect to get back "Roar" and 4, repectively.
        
        Lion lion;
        lion.get_noise();       // I expect a "Roar"
        lion.get_num_legs();    // I expect back 4

    I will also test the code with Animal and Lion pointers and expect the same values.

        Lion *lion_ptr = new Lion();
        lion_ptr.get_noise();       // I expect a "Roar"
        lion_ptr.get_num_legs();    // I expect back 4

    and 

        Animal *animal_ptr = new Lion();
        animal_ptr.get_noise();     // I expect a "Roar"
        animal_ptr.get_num_legs();  // I expect back 4

*/

// class Animal {
// public:
//     virtual std::string get_noise() = 0;
//     virtual int get_num_legs() = 0;
// };

// class Lion: public Animal {
// public:
//     virtual std::string get_noise() override {
//         std::cout << "Roar" << std::endl;
//         return "Roar";
//     }
//     virtual int get_num_legs() override {
//         std::cout << 4 << std::endl;
//         return 4;
//     }
//     virtual ~Lion() {};
// };


#include <string>
#include <iostream>
#include "Lion.h"

int main() {
    std::cout << std::endl;

    Lion lion;
    lion.get_noise();           // I expect a "Roar"
    lion.get_num_legs();        // I expect back 4
    std::cout << std::endl;
    
    Lion *lion_ptr = new Lion();
    lion_ptr->get_noise();      // I expect a "Roar"
    lion_ptr->get_num_legs();   // I expect back 4
    std::cout << std::endl;

    Animal *animal_ptr = new Lion();
    animal_ptr->get_noise();    // I expect a "Roar"
    animal_ptr->get_num_legs();  // I expect back 4

    std::cout << std::endl;
    return 0;
}