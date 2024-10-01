#include "phonebook.hpp"
/**/

Phonebook::Phonebook()
{
}

Phonebook::~Phonebook()
{
}
void Phonebook::add_field(int N)
    {
        std::string commandone;
        while (contacts[N].Last_Name.empty())
        {
            std::cout << "error: empty field!" << std::endl;
            std::getline(std::cin, commandone);
            contacts[N].Last_Name = commandone;
        }
    }
    void Phonebook::ScaleContacs(int N)
    {
        int i;
        i = 0;
        while (i < 7 && N == 7)
        {
            contacts[i].First_Name = contacts[i + 1].First_Name;
			i++;
        }
    }
    void Phonebook::Add(int N)
    {
        std::string First;
        std::string Last;
        std::string Nick;
        std::string Phone;
        std::string Darkest;

        ScaleContacs(N);
        std::cout << "First Name : ";
        std::getline(std::cin, First);
        while (First.empty())
        {
            std::cout << "error: empty field!" << std::endl;
            std::cout << "First Name : ";
            std::getline(std::cin, First);
        }
        std::cout << "Last Name : ";
        std::getline(std::cin, Last);
        while (Last.empty())
        {
            std::cout << "error: empty field!" << std::endl;
            std::cout << "Last Name : ";
            std::getline(std::cin, Last);
        }
        std::cout << "Nickname : ";
        std::getline(std::cin, Nick);
        while (Nick.empty())
        {
            std::cout << "error: empty field!" << std::endl;
            std::cout << "Nickname : ";
            std::getline(std::cin, Nick);
        }
        std::cout << "Phone Number : ";
        std::getline(std::cin, Phone);
        while (Phone.empty())
        {
            std::cout << "error: empty field!" << std::endl;
            std::cout << "Phone Number :";
            std::getline(std::cin, Phone);
        }
        std::cout << "Darkest Secret : ";
        std::getline(std::cin, Darkest);
        while (Darkest.empty())
        {
            std::cout << "error: empty field!" << std::endl;
            std::cout << "Darkest Secret : ";
            std::getline(std::cin, Darkest);
        }
       contacts[N].First_Name = First;
       contacts[N].Last_Name = Last;
       contacts[N].Nickname = Nick;
       contacts[N].Phone_Number = Phone;
       contacts[N].Darkest_Secret = Darkest;
    }
    //convert string to number, on any case of error return 8
    int Phonebook::ottoi(std::string number)
    {
        if (number == "1")
            return 0;
        if (number == "2")
            return 1;
        if (number == "3")
            return 2;
        if (number == "4")
            return 3;
        if (number == "5")
            return 4;
        if (number == "6")
            return 5;
        if (number == "7")
            return 6;
        if (number == "8")
            return 7;
        return 8;
    }
    //put index, return 0 invalid, 1 valid ;
    int Phonebook::search()
    {
        std::cout << "Choose index: ";
        std::string index;
        std::getline(std::cin, index);
        if (ottoi(index) < 8 && !contacts[ottoi(index)].First_Name.empty())
        {
             std::cout << contacts[ottoi(index)].First_Name << std::endl;
             std::cout << contacts[ottoi(index)].Last_Name << std::endl;
             std::cout << contacts[ottoi(index)].Nickname << std::endl;
             std::cout << contacts[ottoi(index)].Phone_Number << std::endl;
             std::cout << contacts[ottoi(index)].Darkest_Secret << std::endl;
             return 1;
        }
        else
            std::cout << "invalid index!" << std::endl;
        return 0;
    }
    void Phonebook::display_field(std::string field)
    {
       if (field.size() > 10)
       {
            std::cout << field.substr(0, 8) << ".";
       }
       else
       {
            int i = 0;
            while  ((i + field.size()) < 11)
            {
                 std::cout << " ";
                 i++;
            }
            std::cout << field;
       }
        std::cout << "|";
    }
    void Phonebook::Display_all()
    {
        if (contacts[0].First_Name.empty())
        {
            std::cout << "No contacts yet!" << std::endl;
            return ;
        }
        int i = 0;
        std::cout << "---------------------------------------------\n|                CONTATCS LIST              |\n---------------------------------------------\n";

        while (i < 8 && !(contacts[i].First_Name.empty()))
        {
            std::cout << "|";
            int z = 0;
            while  (z < 9)
            {
                 std::cout << " ";
                 z++;
            }
            std::cout << i + 1;
            std::cout << "|";
            display_field(contacts[i].First_Name);
            display_field(contacts[i].Last_Name);
            display_field(contacts[i].Nickname);
            display_field(contacts[i].Phone_Number);
            display_field(contacts[i].Darkest_Secret);
        }
        while(!search());

    }
