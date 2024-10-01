#include "phonebook.hpp"

int main ()
{
    std::string command;
    Phonebook phonebook;
    int N = 0;
	std::cout << "ADD to add a contact\nSEARCH to look fore a contact\nEXIT to leave the phonebook\n";
   while (true)
	{
		if (std::cin.eof())
                break;
	    std::cout << "enter command>> ";
        std::getline(std::cin, command);
        if (command == "ADD")
        {
            phonebook.Add(N++);
            if (N >= 8)
                N = 7;
        }
        if (command == "SEARCH")
        {
            phonebook.Display_all();

        }
        if (command == "EXIT")
            break;
    }
    //std::cout << "\n" << std::endl;
    return 0;
}