#include <iostream>

void findCommand(std::string input) {
    if (input == "print") {
        std::cout << "CGeekL: Hello" << std::endl;
    } else if (input == "bye") 
        std::cout << "CGeekL: Bye" << std::endl;
    else if (input == "supercalifragilisticexpialadocious")
        std::cout << "You discovered a secret message! Congrats!" << std::endl;
    else
         system(input.c_str());
}