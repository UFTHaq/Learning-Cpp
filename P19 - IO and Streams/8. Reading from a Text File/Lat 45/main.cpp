/*
    READING A TEXT FILE
    =========================================================================================
    
    Please complete the code in the function read_file.
    
    The file name will be passed to the function by the test harness. 
    
    Try to open the filename supplied for reading and read each word from the file and 
    display it to cout followed by a std::endl
    
    Be sure to test to see if the file was opened successfully.
    
    If the file cannot be opened, please display "Error opening file" to std::cerr followed 
    by std::endl
*/

#include <iostream>
#include <fstream>

int main() {
    std::cout << std::endl;

    std::string path = "D:/Coding/C++ - UDEMY/P19 - IO and Streams/8. Reading from a Text File/Lat 45";

    std::fstream my_in_file;
    my_in_file.open(path + "/data.txt");

    if (!my_in_file) {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    } else {
        std::cout << "[DONE] OPEN FILE\n" << std::endl;
    }

    char c;
    while (!my_in_file.eof()) {
        my_in_file.get(c);
        std::cout << c;
    }
    std::cout << std::endl;

    my_in_file.close();

    std::cout << std::endl;
    return 0;
}