#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
    public:
    std::string First_Name;
    std::string Last_Name;
    std::string Nickname;
    std::string Phone_Number;
    std::string Darkest_Secret;
	Contact();
	~Contact();
};

#endif