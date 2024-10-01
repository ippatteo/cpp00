#include <iostream>
/**/
class Contacts
{
    public:
    std::string First_Name;
    std::string Last_Name;
    std::string Nickname;
    std::string Phone_Number;
    std::string Darkest_Secret;

};

class Phonebook
{
    public:
    Contacts Contact[8];
    void AddFirstName(int N)
    {
        std::string commandone;       
        while (Contact[N].First_Name.empty())
        {
            std::cout << "error: empty field!" << std::endl;
            std::getline(std::cin, commandone);
            Contact[N].First_Name = commandone;
        }
    }
    void AddLastName(int N)
    {
        std::string commandone;       
        while (Contact[N].Last_Name.empty())
        {
            std::cout << "error: empty field!" << std::endl;
            std::getline(std::cin, commandone);
            Contact[N].Last_Name = commandone;
        }
    }
    void AddNickame(int N)
    {
        std::string commandone;       
        while (Contact[N].Last_Name.empty())
        {
            std::cout << "error: empty field!" << std::endl;
            std::getline(std::cin, commandone);
            Contact[N].Last_Name = commandone;
        }
    }
    void PhoneNumber(int N)
    {
        std::string commandone;       
        while (Contact[N].Last_Name.empty())
        {
            std::cout << "error: empty field!" << std::endl;
            std::getline(std::cin, commandone);
            Contact[N].Last_Name = commandone;
        }
    }
    void add_field(int N)
    {
        std::string commandone;       
        while (Contact[N].Last_Name.empty())
        {
            std::cout << "error: empty field!" << std::endl;
            std::getline(std::cin, commandone);
            Contact[N].Last_Name = commandone;
        }
    }
    void ScaleContacs(int N)
    {
        int i;
        i = 0;
        while (i < 7 && N == 7)
        {
            Contact[i].First_Name = Contact[++i].First_Name;
        }
    }
    void Add(int N)
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
       Contact[N].First_Name = First;
       Contact[N].Last_Name = Last;
       Contact[N].Nickname = Nick;
       Contact[N].Phone_Number = Phone;
       Contact[N].Darkest_Secret = Darkest;
    }
    //convert string to number, on any case of error return 8
    int ottoi(std::string number)
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
    int search()
    {
        std::cout << "Choose index: ";
        std::string index;
        std::getline(std::cin, index);
        if (ottoi(index) < 8 && !Contact[ottoi(index)].First_Name.empty())
        {
             std::cout << Contact[ottoi(index)].First_Name << std::endl;
             std::cout << Contact[ottoi(index)].Last_Name << std::endl;
             std::cout << Contact[ottoi(index)].Nickname << std::endl;
             std::cout << Contact[ottoi(index)].Phone_Number << std::endl;
             std::cout << Contact[ottoi(index)].Darkest_Secret << std::endl;
             return 1;
        }
        else 
            std::cout << "invalid index!" << std::endl;
        return 0;
    }
    void display_field(std::string field)
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
    void Display_all()
    {
        if (Contact[0].First_Name.empty())
        {
            std::cout << "No contact yet!" << std::endl;
            return ;
        }
        int i = 0;
        std::cout << "---------------------------------------------\n|                CONTATCS LIST              |\n---------------------------------------------\n";
        
        while (i < 8 && !(Contact[i].First_Name.empty()))
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
            display_field(Contact[i].First_Name);
            display_field(Contact[i].Last_Name);
            display_field(Contact[i].Nickname);
            display_field(Contact[i].Phone_Number);
            display_field(Contact[i].Darkest_Secret);
        }
        while(!search());

    }
};


int main (int argc, char **argv)
{
    std::string command;
    Phonebook phonebook;
    int N = 0;
   while (true)
	{
	    std::cout << "Enter command: "<< std::endl;
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
        if (command == "exit")
            break;
    }
    //std::cout << "\n" << std::endl;
    return 0;
}