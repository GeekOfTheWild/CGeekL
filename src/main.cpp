#include <iostream>
#include <string>
#include "findCommand.h"


int main() {
    std::string input;
    while (input != "exit") {
        std::cout << "CGeekL > ";
        std::getline(std::cin, input);
        findCommand(input);
    }
    
    return 0;
}               