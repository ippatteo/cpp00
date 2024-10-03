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
            phonebook.Add(N);
			N++;
            if (N >= 8)
                N = 0;
        }
        else if (command == "SEARCH")
        {
            phonebook.Display_all();

        }
        else if (command == "EXIT")
            break;
        else
            std::cout << "Wrong command!" << std::endl;

    }
    //std::cout << "\n" << std::endl;
    return 0;
}