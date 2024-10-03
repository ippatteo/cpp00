#include "contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::setFirst(std::string str)
{
	First_Name = str;
}
void Contact::setLast(std::string str)
{
    Last_Name = str;
}
void Contact::setNick(std::string str)
{
    Nickname = str;
}
void Contact::setPhone(std::string str)
{
    Phone_Number = str;
}
void Contact::setDark(std::string str)
{
    Darkest_Secret = str;
}
std::string Contact::getFirst()
{
    return First_Name;
}
std::string Contact::getLast()
{
    return Last_Name;
}
std::string Contact::getNick()
{
    return Nickname;
}
std::string Contact::getPhone()
{
    return Phone_Number;
}
std::string Contact::getDark()
{
    return Darkest_Secret;
}