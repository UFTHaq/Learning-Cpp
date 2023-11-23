/*
    EXCEPTION HANDLING
    ================================================================================
    BASIC CONCEPTS

    - Exception Handling
        - Dealing with extraordinary situations
        - Indicates that an extraordinary situation has been detected or
          has occured
        - Program can deal with the extraordinary situation in a subtle manner

    - What causes exceptions?
        - Insufficient resources
        - Missing resources
        - Invalid operations
        - Range violations
        - Underflows and overflows
        - Illegal data and many others

    - Exception Safe
        - When your code handles exceptions

    ================================================================================
    TERMINOLOGY

    - Exception
        - an object or primitive type that signals that an error has occurred

    - Throwing an exception (raising an exception)
        - Your code detects that an error has occurred or will occur
        - The place where the error occurred may not know how to handle the error
        - Code can throw an exception describing the error to another part of the 
          program that knows how to handle the error
    
    - Catching an exception (handle the exception)
        - Code that handles ehe exception
        - May or may not cause the program to terminate

    ================================================================================
    C++ SYNTAX

    - throw
        - Throws an exception
        - Followed by an argument

    - try { code that may throw an exceptoin }
        - You place code that may throw an exception in a try block
        - If the code throws an exception the try block is exited
        - The thrown exception is handled by a catch handler
        - If no catch handler exist the program terminates

    - catch (Exception ex) { code to handle the exception }
        - Code that handles the exception
        - Can have multiple catch handlers
        - May or may not cause the program to terminate

    ================================================================================
    Divide by zero example

    - What happens if total is zero?
        - crash, overflow?
        - It depends

        double average {};
        average = sum / total;

    ================================================================================
    Divide by zero example

    - What happens if total is zero?
        - crash, overflow?
        - It depends

        double average {};
        if (total == 0) {
            // what to do?
        } else {
            average = sum / total;
        }

    ================================================================================
    Divide by zero example

        double average{};
        try {                                   // try block
            if (total == 0) {
                throw 0;                        // throw the exception
            }
            average = sum / total;              // won't execute if total == 0
            // use average here
        }
        catch (int &ex) {                       // exception handler
            std::cerr << "Can't divide by zero" << std::endl;
        }
        std::cout << "Program continues" << std::endl;

*/