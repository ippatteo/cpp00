#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
class Phonebook
{
    Contact contacts[8]; 
    public:
    void add_field(int N);
    void Add(int N);
    int ottoi(std::string number);
    int search();
    void display_field(std::string field);
    void Display_all();
    Phonebook();
	~Phonebook();
};

#endif