/*
    Using const with classes

    - Pass arguments to class member methods as const
    - We can also create const objects
    - What happens if we call member functions on const objects?
    - const-correctness

    --------------------------------------------------------------------------------
    Creating a const object

    - villain is a const object so it's attributes cannot change.

        const Player villain {"Villain", 100, 55};

    --------------------------------------------------------------------------------
    - What happens when we call member methods on a const object?

        const Player villain {"Villain", 100, 55};

        villain.set_name("Nice guy");                    // Error

        std::cout << villain.get_name() << std::endl;    // Error
    --------------------------------------------------------------------------------
    - What happens when we call member methods on a const object?

        const Player villain {"Villain", 100, 55};

        void display_player_name(const Player &p) {
            cout << p.get_name() << endl;
        }

        display_player_name(villain);                    // Error
    --------------------------------------------------------------------------------
    Solution

    class Player {
    private:
        . . .
    public:
        std::string get_name() const;
        . . .
    };
    --------------------------------------------------------------------------------
    const-correctness

        const Player villain {"Villain", 100, 55};
        
        villain.set_name("Nice guy");                    // Error

        std::cout << villain.get_name() std::endl;       // OK
*/