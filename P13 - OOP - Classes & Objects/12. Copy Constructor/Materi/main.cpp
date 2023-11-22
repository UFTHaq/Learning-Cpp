/*
    -------------------------------------------------------------------
                            Copy Constructor
    -------------------------------------------------------------------
    - When objects are copied C++ must create a new object from
      an existing object
    
    - When is a copy of an object made?
        - passing object by value as a parameter
        - returning an object from a function by value
        - constructing one object based on another of the same class

    - C++ must have a way of accomplishing this so it provides a 
      compiler-defined copy constructor if you don't.

    -------------------------------------------------------------------
                          Pass Object By-Value
    -------------------------------------------------------------------
    Player hero{"Hero", 100, 20};

    void display_player(Player p) {
        // p is a COPY of hero in this example
        // use p
        // Destructor for p will be called
    }

    display_player(hero);

    -------------------------------------------------------------------
                         Return Object By-Value
    -------------------------------------------------------------------
    Player enemy;

    Player create_super_enemy() {
        Player an_enemy{"Super Enemy", 1000, 1000};
        return an_enemy;       // A COPY of an enemy is returned
    }

    enemy = create_super_enemy();

    -------------------------------------------------------------------
                  Construct one object based on another
    -------------------------------------------------------------------
    Player hero{"Hero", 100, 100};

    Player another_hero{hero};      // A COPY of hero is made

    -------------------------------------------------------------------
                            Copy Constructor
    -------------------------------------------------------------------
    - If you don't provide your own way of copying objects by value
      then the compiler provides a default way of copying objects

    - Copies the values of each data member to the new object
        - default memberwise copy

    - Perfectly fine in many cases

    - Beware if you have a pointer data member
        - Pointer will be copied
        - Not what it is pointing to
        - Shallow vs Deep copy - more in the next video

    -------------------------------------------------------------------
                            Copy Constructor
    -------------------------------------------------------------------
    - Provide a copy constructor when your class has raw pointer members

    - Provide the copy constructor with a const reference parameter

    - Use STL classes as they already provide copy constructors

    - Avoid using raw pointer data member if possible

    -------------------------------------------------------------------
                     Declaring the Copy Constructor
    -------------------------------------------------------------------
    Type::Type(const Type &source);


    Player::Player(const Player &source);

    Account::Account(const Account &source);

    -------------------------------------------------------------------
                   Implementing the Copy Constructor
    -------------------------------------------------------------------
    Type::Type(const Type &source) {
        // code or initialization list to copy the object
    }
    -------------------------------------------------------------------
    Contoh 1:

    Player

    Player::Player(const Player &source)
        : name{source.name}, health{source.health}, exp{source.exp} {

    }
    -------------------------------------------------------------------
    Contoh 2:

    Account

    Accout::Account(const Account &source)
        : name{source.name}, balance{source.balance} {

    }


*/