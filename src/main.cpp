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
        std::cout << "Ended" << std::endl;
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
    std::getline(std::cin, Username);
}

int main() {
    std::cout << "Please input a username: ";
    std::string Username;
    std::getline(std::cin, Username);
    Commands commands;
    std::cout << Username << std::endl;
    bool repeat = true;
    while (repeat) {
        if (Username == "1")
        {
            std::cout << "Error, username set incrorrectly or is invalid" << std::endl;
            return 0;
        }
        if (commands.input == "exit")
        {
            return 0;
        }
        std::cout << Username << " CGeekL > ";
        std::getline(std::cin, commands.input);
        commands.findCommand();
    }
    return 0;
}               