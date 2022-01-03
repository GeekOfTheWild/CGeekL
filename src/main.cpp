#include <iostream>
#include <string>

class Commands
{
private:
    void Print()
    {
        std::cout << "CGeekL: Hello" << std::endl;
    }
    void Bye()
    {
        std::cout << "CGeekL: Bye" << std::endl;
    }
    void supercalifragilisticexpialidocious()
    {
        std::cout << "CGeekL: You discovered a secret message! Congrats! Supercalifragilisticexpialidocious!" << std::endl;
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

int main() {
    Commands commands;
    while (commands.input != "exit") {
        std::cout << "CGeekL > ";
        std::getline(std::cin, commands.input);
        commands.findCommand();
    }
    return 0;
}               