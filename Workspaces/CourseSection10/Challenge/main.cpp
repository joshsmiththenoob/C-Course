// Section 10
// Challenge -
// Substitution Cipher

/* 
Basically, each letter of the alphabet gets replaced by another letter of the alphabet
ex : 
 * encrypt :'a' -> 'X', 'b' -> 'Z'
 * decrypt : 'X' -> 'a', 'Z' -> 'b'
 * Currently, the cipher always substitutes a lowercase letter with an uppdercase letter and vice-versa.
 * 
 * Remeber, the less code you write the less code you have to test!
 * Reuse existing functionality in libraries and in the std::string class!
*/

#include <iostream>
#include <string>

int main(){
    // string = vector of characters: dynamic size
    std::string alphabet {"[ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    std::string key {" [XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
//    std::cout << "len of alphabet: " << alphabet.length() ;
//    std::cout << "len of key: " << key.length() << std::endl;

    // prompt user to enter message they want to encrypt
    // declare and initialized variable to contain message the user enter
    std::string message {};
    std::cout << "Enter your secret message: ";
    // Remember : If you assign variable with whole message with blank(space) in console(the play prompt) -> use getline!
    std::getline(std::cin, message);
    
    // encrypt message
    std::cout << "Encrypting message..." << std::endl;
    for (std::size_t i {0}; i < message.length() ; ++i){
        std::size_t position {alphabet.find(message[i])};
        if (position != std::string::npos)
            message[i] = key[position];
//        std::cout << message[i] << std::endl;
    }
    std::cout << "Encrypted message: " << message << std::endl;
    
    // decrypt message
    std::cout << "Derypting message..." << std::endl;
    for (std::size_t i {0}; i < message.length() ; ++i){
        std::size_t position {key.find(message[i])};
        if (position != std::string::npos)
            message[i] = alphabet[position];
//        std::cout << message[i] << std::endl;
    }
    std::cout << "Deryped message: " << message << std::endl;
    
    std::cout << std::endl;
    return 0;
}