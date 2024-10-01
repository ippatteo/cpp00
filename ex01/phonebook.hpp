#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
class Phonebook
{
    public:
	Phonebook();
	~Phonebook();
    Contact contacts[8];
    void add_field(int N);
    void ScaleContacs(int N);
    void Add(int N);
    int ottoi(std::string number);
    int search();
    void display_field(std::string field);
    void Display_all();
};

#endif