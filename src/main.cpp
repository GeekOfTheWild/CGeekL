#include <iostream>
#include <string>
#include <fstream>

class Commands
{
private:
    void Print()
    {
        std::cout << " CGeekL: Hello" << std::endl;
    }
    void Bye()
    {
        std::cout << " CGeekL: Bye" << std::endl;
    }
    void supercalifragilisticexpialidocious()
    {
        std::cout << " CGeekL: You discovered a secret message! Congrats! Supercalifragilisticexpialidocious!" << std::endl;
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
        else
            system(input.c_str());
    }
};

void Username()
{
    std::cout << "Please input a username: ";
    std::string Username;
    std::cin >> Username;
}

int main() {
    Username();
    Commands commands;
    while (commands.input != "exit") {
        std::cout << Username << "CGeekL > ";
        std::getline(std::cin, commands.input);
        commands.findCommand();
    }
    return 0;
}               