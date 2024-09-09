#include <iostream>

void Upper_Str(char *str)
{
    int  i = 0;

    while (str[i])
    {
        std::cout << (char)toupper(str[i]);
        i++;
    }
    std::cout << " ";
}

int main (int argc, char **argv)
{
    int i = 1;
    if (argc == 1)
       std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (argv[i])
        Upper_Str(argv[i++]);
    std::cout << "\n";
    return 0;
}