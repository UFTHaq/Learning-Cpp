/*
    MESSAGE CHIPER
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << endl;

    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key      {"QAZWSXEDCRFVTGBYHNUJMIKOLPqazwsxedcrfvtgbyhnujmikolp"};

    string input_message {};
    string encrypted_msg {};
    string decrypted_msg {};

    cout << "Enter the message: ";
    getline(cin, input_message);

    for (char i: input_message) {
        if (isalpha(i)) {
            int position = alphabet.find(i);
            // cout << index << " ";
            encrypted_msg.push_back(key.at(position));
        } else {
            // cout << i << " ";
            encrypted_msg.push_back(i);
        }
    }
    cout << endl;
    
    cout << "\nEncrypting message..." << endl;
    cout << "\nEncrypted message: " << encrypted_msg << endl;

    for (char i: encrypted_msg) {
        if (isalpha(i)) {
            int position = key.find(i);
            decrypted_msg.push_back(alphabet.at(position));
        } else {
            decrypted_msg.push_back(i);
        }
    }

    cout << "\nDecrypting message..." << endl;
    cout << "\nDecrypted message: " << decrypted_msg << endl;

    cout << endl;
    return 0;
}