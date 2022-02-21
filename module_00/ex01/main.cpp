#include <iostream>
#include <string>
#include "Phonebook.hpp"

int main (int argc, char **argv)
{
    std::string input;
    Phonebook   Phonebook;

    (void)argv;
    if (argc > 1)
    {
        std::cout << "Usage : ./phonebook" << std::endl;
        return (0);
    }
    std::cout << "|-------------------------|" << std::endl;
    std::cout << "|---- M.A.P.B. v.beta ----|" << std::endl;
    std::cout << "|-------------------------|" << std::endl;
    while (true)
    {
        std::cout << "Insert your command : (A)DD, (S)EARCH, (E)XIT : " << std::ends;
        getline(std::cin, input);
        if (input.length() == 0)
        {
            continue ;
        }
        if (input == "EXIT" || input == "exit" || input == "E" || input == "e")
        {
            break ;
        }
        else if (input == "ADD" || input == "add" || input == "A" || input == "a")
        {
            Phonebook.create_data();
        }
        else if (input == "SEARCH" || input == "search" || input == "S" || input == "s")
        {
            Phonebook.show_saved_data();
        }
    }
    return (0);
}