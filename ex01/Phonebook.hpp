
#include "header.hpp"

class Phonebook
{
    public:
    Contacts Contact[8];
    void AddFirstName(int N);
    void AddNickame(int N);
    void PhoneNumber(int N);
    void add_field(int N);
    void ScaleContacs(int N);
    void Add(int N);
    int ottoi(std::string number);
    int search();
    void display_field(std::string field);
    void Display_all();
};