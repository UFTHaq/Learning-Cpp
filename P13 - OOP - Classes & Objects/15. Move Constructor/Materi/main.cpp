/*
    Move Constructor

    - Sometimes when we execute code the compiler creates unnamed temporary values.

        int total {0};
        total = 100 + 200;

        - 100 + 200 is evalueated and 300 stored in an unnamed temp value
        - the 300 is then stored in the variable total
        - then the temp value is discarded

    - The same happens with objects as well.

    -------------------------------------------------------------------------------
    When is it useful?

    - Sometimes copy constructors are called many times automatically due to the
      copy semantics of C++.
    - Copy constructors doing deep copying can have a significant
      performance bottleneck.
    - C++ 11 introduced move semantics and the move constructor.
    - Move constructor moves and object rather than copy it.
    - Optional but recommended when you have a raw pointer.
    - Copy elision - C++ may optimize copying away completely (RVO)
      (RVO - Return Value Optimization)
    -------------------------------------------------------------------------------
    R-VALUE Reference

    - Used in moving semantics adn perfect forwarding
    - Move semantics is all about r-value references
    - Used by move constructor and move assignment opereator to efficiently
      move an object rather than copy it
    - R-Value reference operator (&&)
    -------------------------------------------------------------------------------
    Contoh R-Value Reference

    int x {100};              // X = L-Value , 100 = R-Value

    int &L_Ref = x;           // L-VALUE Reference
    L_Ref = 10;               // Change x to 10

    int &&R_Ref = 200;        // R-VALUE Reference
    R_Ref = 300;              // Change R_Ref to 300

    int &&X_ref = x;          // Assign L-Value (x) to R-Value Ref -> Compiler Error
    -------------------------------------------------------------------------------
    L-VALUE REFERENCE PARAMETERS

    int x {100};                  // x is an L-VALUE

    void func(int &num);          // A

    func(x);                      // calls A - x is an L-VALUE
    func(200);                    // Error - 200 is an R-VALUE

    error: cannot bind non-const lvalue reference of type 'int&' to an rvalue of 
           type 'int'
    -------------------------------------------------------------------------------
    R-VALUE REFERENCE PARAMETERS

    int x {100};                  // x is an L-VALUE

    void func(int &&num);         // B

    func(200);                    // calls B - 200 is an R-VALUE
    func(x);                      // Error - x is an L-VALUE

    error: cannot bind rvalue reference of type 'int&&' to lvalue of type 'int'
    -------------------------------------------------------------------------------
    Overload L-VALUE and R-VALUE reference parameters

    int x {100};                  // x is an L-VALUE

    void func(int &num);          // A
    void func(int &&num);         // B

    func(x);                      // calls A - x is an L-VALUE
    func(200);                    // calls B - 200 is an R-VALUE
    -------------------------------------------------------------------------------
    EXAMPLE - MOVE CLASS

    class Move {
    private:
        int *data;                          // raw pointer
    public:
        // Methods
        void set_data_value(int d) {
            *data = d;
        }
        int get_data_value() {
            return *data;
        }
        // Constructor
        Move(int d);                        // Constructor
        Move(const Move &source);           // Copy Constructor
        ~Move();                            // Destructor
    };

    Move::Move(const Move &source) {
        data = new int;
        *data = *source.data;
    }

    int main() {
        Vector<Move> vec;
        
        vec.push_back(Move{10});
        vec.push_back(Move{20});

        // Copy Constructor will be called to copy the temps
    }
    ------------------------------------
    The OUTPUT

    1. Constructor for: 10
    2. Constructor for: 10
    3. Copy Constructor - deep copy for: 10
    4. Destructor freeing data for: 10
    5. Constructor for: 20
    6. Constructor for: 20
    7. Copy Constructor - deep copy for: 20
    8. Constructor for: 10
    9. Copy Constructor - deep copy for: 10
    10. Destructor freeing data for: 10
    11. Destructor freeing data for: 20
    -------------------------------------------------------------------------------
    What does it do?

    - Instead of making a deep copy of the move constructor
        - 'moves' the resource
        - Simply copies the address of the resource from the source to the
          current object
        - And, nulls out the pointer in the source pointer
    
    - Very efficient
    -------------------------------------------------------------------------------
    SYNTAX - R-VALUE REFERENCE

    Type::Type(Type &&source);

    Player::Player(Player &&source);

    Move::Move(Move &&source);

    -------------------------------------------------------------------------------
    EXAMPLE - MOVE CLASS with MOVE CONSTRUCTOR

    class Move {
    private:
        int *data;                          // raw pointer
    public:
        // Methods
        void set_data_value(int d) {
            *data = d;
        }
        int get_data_value() {
            return *data;
        }
        // Constructor
        Move(int d);                        // Constructor
        Move(const Move &source);           // Copy Constructor
        Move(Move &&source);
        ~Move();                            // Destructor
    };

    Move::Move(Move &&source) 
        : data(source.data) {
            source.data = nullptr;
    }

    // 'Steal' the data and then null out the source pointer

    int main() {
        Vector<Move> vec;
        
        vec.push_back(Move{10});
        vec.push_back(Move{20});

        // Move Constructor will be called for the temp R-VALUES
    }
    ------------------------------------
    The OUTPUT

    1. Constructor for: 10
    2. Move constructor - Moving resource: 10
    3. Destructor freeing data for nullptr
    4. Constructor for: 20
    5. Move constructor - Moving resource: 20
    6. Move constructor - Moving resource: 10
    7. Destructor freeing data for nullptr
    8. Destructor freeing data for nullptr
    9. Destructor freeing data for: 10
    10. Destructor freeing data for: 20

*/