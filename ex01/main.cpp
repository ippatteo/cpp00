#include "phonebook.hpp"
#include <iostream>

int main ()
{
    std::string command;
    Phonebook phonebook;
    int N = 0;
   while (true)
	{
	    std::cout << "Enter command\nADD to add a contact\nSEARCH to look fore a contact\nEXIT to leave the phonebook\n>> "<< std::endl;
        std::getline(std::cin, command);
        if (command == "ADD")
        {
            phonebook.Add(N++);
            if (N >= 8)
                N = 7;
        }
        if (command == "SEARCH")
        {
            std::getline(std::cin, command);
        }
        if (command == "EXIT")
            break;
    }
    //std::cout << "\n" << std::endl;
    return 0;
}