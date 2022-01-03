#include <iostream>
#include <string>
#include "findCommand.h"

class Commands
{
private:
    void Print()
    {
        std::cout << "CGeekL: Hello";
    }
    void Bye()
    {
        std::cout << "CGeekL: Bye";
    }
    void supercalifragilisticexpialidocious()
    {
        std::cout << "CGeekL: You discovered a secret message! Congrats! Supercalifragilisticexpialidocious!";
    }
public:
    std::string input;
    void findCommand()
    {
        if (input == "print")
        
            Print();
        else if (input == "bye")
        
            Bye();
        else if (input == "supercalifragilisticexpialidocious")
            supercalifragilisticexpialidocious();
    }
};

int main() {
    Commands commands;
    while (commands.input != "exit") {
        std::cout << "CGeekL > ";
        std::getline(std::cin, commands.input);
        commands.findCommand();
    }
    return 0;
}               