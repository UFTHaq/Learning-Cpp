/*
    EXCEPTION HANDLING
    ==================================================================================
    User-defined exceptions

    We can create exception classes and throw instances of those classes

    Best practice:
        - throw an object not primitive type
        - throw an object by value
        - catch an object by reference (of const reference)
  
    ==================================================================================
    User-defined exceptions
    
        class DividedByZeroException {
        };

        class NegativeValueException {
        };

    ==================================================================================
    Throwing user-defined exception classes

        double calculate_mpg(int miles, int gallons) {
            if (gallons == 0) {
                throw DividedByZeroException();
            }
            if (miles < 0 || gallons < 0) {
                throw NegativeValueException();
            }
            return static_cast<double>(miles) / gallons;
        }

    ==================================================================================
    Catching user-defined exceptions

        try {
            miles_per_gallon = calculate_mpg(miles, gallons);
            std::cout << miles_per_gallon << std::endl;
        }
        catch (const DividedByZeroException &ex) {
            std::cerr << "You can't divide by zero" << std::endl;
        }
        catch (const NegativeValueException &ex) {
            std::cerr << "Negative values aren't allowed" << std::endl;
        }

        std::cout << "Bye" << std::endl;


*/