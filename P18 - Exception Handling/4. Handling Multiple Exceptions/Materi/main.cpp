/*
    EXCEPTION HANDLING
    ===========================================================================
    Throwing multiple exceptions from a function

    What if a function can fail in several ways
        - gallons is zero
        - miles or gallons is negative

        double calculate_mpg(int miles, int gallons) {
            return static_cast<double>(sum) / gallons;
        }

    ===========================================================================
    Throwing multiple exceptions from a function
    Throw different type exceptions for each condition

        double calculate_mpg(int miles, int gallons) {
            if (gallons == 0) {
                throw 0;
            }
            if (miles < 0 || gallons < 0) {
                throw std::string {"Negative value error"};
            }
            return static_cast<double>(miles) / gallons;
        }

    ===========================================================================
    Catching an exception thrown from a function

        double miles_per_gallon {};

        try {
            miles_per_gallon = calculate_mpg(miles, gallons);
            std::cout << miles_per_gallon << std::endl;
        }

        catch (int &ex) {
            std::cerr << "You can't divide by zero" << std::endl;
        }

        catch (std::string &ex) {
            std::cerr << ex << std::endl;
        }

        std::cout << "Bye" << std::endl;

    ===========================================================================
    Catching any type of exception

        catch (int &ex) {
            . . .
        }

        catch (std::string &ex) {
            . . .
        }

        catch (. . .) {
            std::cerr << "Unknown excpetion" << std::endl;
        }



*/