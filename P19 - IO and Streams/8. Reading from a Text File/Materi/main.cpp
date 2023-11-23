/*
    FILES, STREAMS AND I/O
    =========================================================================================
    Input files (fstream and ifstream)

    fstream and ifstream are commonly used for input files

    1.  #include <fstream>
    2.  Declare an fstream or ifstream object
    3.  Connect it to file on your file system (opens it for reading)
    4.  Read data from the file via the stream
    5.  Close the stream

    =========================================================================================
    Opening a file for reading with (fstream)

        std::fstream in_file {"../myfile.txt", std::ios::in};

    Open for reading in binary mode

        std::fstream in_file {"../myfile.txt", std::ios::in | std::ios::binary}; 

    =========================================================================================
    Opening a file for reading with (ifstream)

        std::ifstream in_file {"../myfile.txt", std::ios::in};

        std::ifstream in_file {"../myfile.txt"};

    Open for rading in binary mode

        std::ifstream in_file {"../myfile.txt", std::ios::binary};

    =========================================================================================
    Opening a file for reading with open

        std::ifstream in_file;
        std::string filename;
        std::cin >> filename;       // get the file name

        in_file.open(filename);
        // or
        if_file.open(filename, std::ios::binary);

    =========================================================================================
    Check if file openend succesfully (is_open)

        if (in_file.is_open()) {
            // read from it
        } else {
            // file could not be openend
            // does it exist?
            // should the program terminate?
        }

    =========================================================================================
    Check if file openend succesfully - test the stream object

        if (in_file) {          // just check the object
            // read from it
        } else {
            // file could not be opened
            // does it exitst?
            // should the program terminate?
        }

    =========================================================================================
    Closing a file

    - Always close any open files to flush out unwrittern data

        in_file.close();

    =========================================================================================
    Reading from files using (>>)

    - We can use the extraction operaton for formatted read
    - Same way we used it with cin

        int num {};
        double total {};
        std::string name {};

        in_file >> num;
        in_file >> total >> name;

    =========================================================================================
    Reading from files using getline

    - We can use getline to read the file one line at a time

        std::string line {};

        std::getline(in_file, line);

    =========================================================================================
    Reading text file one line at a time

        std::ifstream in_file{"../myfile.txt"};             // open file
        std::string line {};

        if (!in_file) {                                     // check if file is open
            std::cerr << "File open error" << std::endl;
            return 1;                                       // exit the program (main)
        }

        while (!in_file.eof()) {                            // while not at the end
            std::getline(in_file, line);                    // read a line
            std::cout << line << std::endl;                 // display the line
        }

        in_file.close();                                    // close the file

    =========================================================================================
    Reading text file one line at a time

        std::ifstream in_file{"../myfile.txt"};
        std::string line {};

        if (!in_file) {
            std::cerr << "File open error" << std::endl;
            return 1;
        }

        while (std::getline(in_file, line)) {
            std::cout << line << std::endl;
        }

        in_file.close();

    =========================================================================================
    Reading text file one character at a time (get)

        std::ifstream in_file{"../myfile.txt"};
        char c;

        if (!in_file) {
            std::cerr << "File open error" << std::endl;
            return 1;
        }

        while (in_file.get(c)) {                // read a character
            std::cout << c;                     // display the character
        }

        in_file.close();


*/
