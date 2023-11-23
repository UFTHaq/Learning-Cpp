/*
    INHERITANCE - BARK DOG, BARK!

    The Animal base class has been provided for you in the Animal.h header file. This class
    contains two pure virtual methods:
    - get_noise()       : Return a string representing the noise that the animal makes.
    - get_num_legs()    : Return an integer representing the number of legs the animal has.

    Additionally, the Animal class contains a constructor that accepts the name and age 
    of the animal, as well as methods to retrieve these properties:
    - Animal()      : A constructor that accepts a string for name and an integer for age.
    - get_name()    : Returns the name of the animal.
    - get_age()     : Returns the age of the animal.

    Your task is to implement a Dog class that inherits from Animal. The Dog class should
    have a Dog.h file that containts the Dog class declaration, and a Dog.cpp file for the
    Dog class implementation.

    You need to override the get_noise() and get_num_legs() methods, and provide a constructor
    for Dog that takes in a name and an age:
    - get_noise()       : Should return the string "Woof".
    - get_num_legs()    : Should return the integer 4.
    - Dog()             : This is the Constructor that should accept a string for the name and
                          an integer for the age. It should pass these values to the base class
                          Animal Constructor.

    Input Format
        Ther is no inpur for this task.
    
    Constraints
        The Dog class must inherit from the Animal class, override the required methods, and 
        correctly implement its constructor.

    How will i test your code?
    Your program should pass the following test:

        Dog dog{"Spot", 5};
        std::string noise = dog.get_noise();    // Woof
        int legs = dog.get_num_legs();          // 4
        int age = dog.get_age();                // 5
        std::string name = dog.get_name();      // Spot

    Your program should also pass the following test that use a pointer to Dog and a 
    Base class pointer:

        Dog *dog_ptr = new Dog{"Spot", 5};
        std::sting noise = dog_ptr->get_noise();    // Woof
        int legs = dog_ptr->get_num_legs();         // 4
        int age = dog_ptr->get_age();               // 5
        std::string name = dog_ptr->get_name();     // Spot

        Animal *animal_ptr = new Dog{"Spot", 5};
        std::string noise = animal_ptr->get_noise();    // Woof
        int legs = animal_ptr->get_num_legs();          // 4
        int age = animal_ptr->get_age();                // 5
        std::string name = animal_ptr->get_name();      // Spot


*/


#include "Dog.h"

int main() {
    std::cout << std::endl;

    Dog dog{"Spot", 5};
    dog.get_noise();
    dog.get_num_legs();
    dog.get_age();
    dog.get_name();
    std::cout << std::endl;

    Dog *ptr_dog = new Dog{"Bull", 3};
    ptr_dog->get_noise();
    ptr_dog->get_num_legs();
    ptr_dog->get_age();
    ptr_dog->get_name();
    delete ptr_dog;

    std::cout << std::endl;
    Animal *ptr_animal = new Dog{"Red", 7};
    ptr_animal->get_noise();
    ptr_animal->get_num_legs();
    ptr_animal->get_age();
    ptr_animal->get_name();
    delete ptr_animal;

    std::cout << std::endl;
    return 0;
}