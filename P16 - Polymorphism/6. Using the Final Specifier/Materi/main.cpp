/*
    POLYMORPHISM
    =============================================================================
    The final specifier

    - C++11 provides the final specifier
        - When used at the class level
        - Prevents a class from being derived from

        - When used at the method level
        - Prevents virtual method from being overridden in derived classes

    =============================================================================
    final class

        class My_class final {
            . . .
        };

        class Derived final: public My Base {
            . . .
        };

*/