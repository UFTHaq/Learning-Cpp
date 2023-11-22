/*
    Struch vs Classes

    - In addition to define a class we can declare a struct
    - struct comes from the C programming language
    - Essentially the same as a class expect
      - members are public by default

    ----------------------------------------------------------------------------
    class

    class Person {
        std::string name;
        std::string get_name();
    };

    Person p;
    p.name = "Frank";                               // Compiler Error - Private
    std::cout << p.get_name() << std::endl;         // Compiler Error - Private
    ----------------------------------------------------------------------------
    struct

    struct Person {
        std::string name:
        std::string get_name();
    };

    Person p;
    p.name = "Frank";                               // OK - Public
    std::cout << p.get_name() << std::endl;         // OK - Public
    ----------------------------------------------------------------------------
    Some General Guidlines

    - Struct
        - Use struct for passive objects with public access
        - Don't declare methods in struct

    - Class
        - Use class for active objects with private access
        - Implement getters/setters as needed
        - Implement member methods as needed
*/