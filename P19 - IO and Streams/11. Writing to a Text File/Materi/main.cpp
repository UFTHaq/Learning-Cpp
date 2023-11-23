/*
    FILES, STREAMS AND I/O
    ========================================================================================
    Output files (fstream and ofstream) 

    fstream and ofstream are commonly used for output files

    1.  #include <fstream>
    2.  Declare an fstream or ofstream object
    3.  Connect if to a file on your file system (opens it for writing)
    4.  Write data to the file via the stream
    5.  Close the stream

    ========================================================================================
    Output files (fstream and ofstream)

    fstream and ofstream are commonly used for output files

    -   Output files will be created if they don't exist
    -   Output files will be overwritten (truncated) by default
    -   Can be opened so that new writes append
    -   Can be open in text or binary modes

    ========================================================================================
    Opening a file for writing with (fstream)

        std::fstream out_file {"../myfile.txt", std::ios::out};

    - Open for writing in binary mode

        std::fstream out_file {"../myfile.txt", std::ios::out | std::ios::binary};

    ========================================================================================
    Opening a file for writing with (ofstream)

        std::ofstream out_file {"../myfile.txt", std::ios::out};

        std::ofstream out_file {"../myfile.txt"};

    - Open for writing in binary mode

        std::ofstream out_file {"../myfile.txt", std::ios::binary};

    ========================================================================================
    Opening a file for writing with (ofstream)

    // truncate (discard contents) when opening
    std::ofstream out_file {"../myfile.txt", std::ios::trunc};

    // append on each write
    std::ofstream out_file {"../myfile.txt", std::ios::app};

    // seek to end of stream when opening
    std::ofstream out_file {"../myfile.txt", std::ios::ate};

    ========================================================================================
    Opening a file for writing with open

        std::ofstream out_file;
        std::string filename;
        std::cin >> filename;       // get the file name

        out_file.open(filename);
        // or 
        out_file.open(filename, std::ios::binary);

    ========================================================================================
    Check if file opened succesfully (is_open)

        if (out_file.is_open()) {
            // read from it
        } else {
            // file could not be created or opened
            // does it exist?
            // should the program terminate?
        }

    ========================================================================================
    Check if file opened succesfully - test the stream object

        if (out_file) {
            // read from in
        } else {
            // file could not be opened
            // does it exist?
            // should the program terminate?
        }

    ========================================================================================
    Close file

    - Always close any open files to flush out any unwritten data

        out_file.close();

    ========================================================================================
    Writing to files using (<<)

    -   We can use the insertion operator for formatted write
    -   Same way we used it with cout

        int num {100};
        double total {255.67};
        std::string name {"Larry"};

        out_file << num << "\n"
                 << total << "\n"
                 << name << std::endl;

    ========================================================================================
    Copying a text file one line at a time

        std::ifstream in_file {"../myfile.txt"};            // open file
        std::ofsteram out_file {"../copy.txt"};

        if (!in_file) {
            std::cerr << "File open error" << std::endl;
            return 1;
        }

        if (!out_file) {
            std::cerr << "File create error" << std::endl;
            return 1;
        }

        std::string line {};

        while (std::getline(in_file, line)) {       // read a line
            out_file << line << std::endl;          // write a line
        }

        in_file.close();
        out_file.close();

    ========================================================================================
    Copying a text file one character at a time (get/put)

        std::ifstream in_file {"../myfile.txt"};            // open file
        std::ofsteram out_file {"../copy.txt"};

        if (!in_file) {
            std::cerr << "File open error" << std::endl;
            return 1;
        }

        if (!out_file) {
            std::cerr << "File create error" << std::endl;
            return 1;
        }

        char c;

        while (in_file.get(c)) {        // read a character
            out_file.put(c);            // write the character
        }

        in_file.close();
        out_file.close();


*/