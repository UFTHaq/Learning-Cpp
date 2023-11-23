/*
    THE STANDARD TEMPLATE LIBRARY
    ==================================================================================================
    Generic Programming with class templates

    What is a C++ class templates?
    - Similar to function template, but at the class level
    - Allows plugging-in any data type
    - Compiler generates the appropriate class from the blueprint

    ==================================================================================================
    Generic Programming with class templates

    - Let's say we want a class to hold Items where the item has a name and an integer

        class Item {
        private:
            std::string name;
            int value;
        public:
            Item(std::string name, int value) : name{name}, value{value} {
            }

            std::string get_name() const {
                return name;
            }

            int get_value() const {
                return value;
            }
        };

    ==================================================================================================
    Generic Programming with class templates

    - But we'd like our Item class to be able to hold any type of data in addition to the string
    - We can't overload class names
    - We don't want to use dynamic polymorphism

    ==================================================================================================
    Generic Programming with class templates

        template <typename T>
        class Item {
        private:
            std::string name;
            T value;
        public:
            Item(std::string name, int value) : name{name}, value{value} {
            }

            std::string get_name() const {
                return name;
            }

            T get_value() const {
                return value;
            }
        };

    ==================================================================================================
    Generic Programming with class templates

        Item<int> item1 {"Fahmi", 1};

        Item<double> item2 {"Ukhem", 1000.0};

        Item<std::string> item3 {"Thor", "Boss"};

        std::vector<Item<int>> vec;

    ==================================================================================================
    Multiple types as template parameters

    - We can have multiple template parameters
    - An their types can be different

        template <typename T1, typename T2>
        struct My_Pair {
            T1 first;
            T2 second;
        };

        My_Pair <std::string, int> p1 {"Ukhem", 100};

        My_Pair <int, double> p2 {124, 13.6};

        std::vector<My_Pair<int, double>> vec;

    ==================================================================================================
    std::pair

        #include <utility>

        std::pair<std::string, int> p1 {"Fahmi", 100};

        std::cout << p1.first;          // Fahmi
        std::cout << p1.second;         // 100



*/