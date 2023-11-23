/*
    EXCEPTION HANDLING
    ========================================================================
    Throwing an exception from a function
    What do we return if total is zero?

        double calculate_avg(int sum, int total) {
            return static_cast<double>(sum) / total;
        }

    ========================================================================
    Throwing an exception from a function
    Throw an exception if we can't complete successfully

        double calculate_avg(int sum, int total) {
            if (total == 0) {
                throw 0;
            }
            return static_cast<double>(sum) / total;
        }

    Catching an exception thrown from a function

        double average {};

        try {
            average = calculate_ave(sum, total);
            std::cout << average << std::endl;
        }
        catch (int &ex) {
            std::cerr << "You can't divide by zero" << std::endl;
        }

        std::cout << "Bye" << std::endl;

*/