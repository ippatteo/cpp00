#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class Contact
{
	private:
    std::string First_Name;
    std::string Last_Name;
    std::string Nickname;
    std::string Phone_Number;
    std::string Darkest_Secret;
	public:
	void setFirst(std::string str);
	void setLast(std::string str);
	void setNick(std::string str);
	void setPhone(std::string str);
	void setDark(std::string str);
	std::string getFirst();
	std::string getLast();
	std::string getNick();
	std::string getPhone();
	std::string getDark();
	Contact();
	~Contact();
};

#endif