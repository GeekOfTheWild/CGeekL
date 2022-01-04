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
    void Supercalifragilisticexpialidocious()
    {
        std::cout << " CGeekL: You discovered a secret message! Congrats! Supercalifragilisticexpialidocious!" << std::endl;
    }
public:
    ~Commands()
    {
        std::cout << "Ended";
    }
    std::string input;
    void findCommand()
    {
        if (input == "print")
            Print();
        else if (input == "bye")
        
            Bye();
        else if (input == "supercalifragilisticexpialidocious")
            Supercalifragilisticexpialidocious();
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
    bool repeat = true;
    while (repeat) {
        if (commands.input == "exit")
        {

        }
        std::cout << Username << "CGeekL > ";
        std::getline(std::cin, commands.input);
        commands.findCommand();
    }
    return 0;
}               