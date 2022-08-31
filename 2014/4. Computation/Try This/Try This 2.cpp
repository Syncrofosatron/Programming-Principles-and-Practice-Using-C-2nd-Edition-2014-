// Author: Neeraj Mishra nmcnemis@gmail.com

#include <iostream>

using std::cout;
using std::cin;

int main()
{
    char lowercase_alphabet = 'a';
    
    int char_increment = 0;
    int counter = 97;

    while(counter <= 122)
    {
        cout << char(lowercase_alphabet + char_increment) << "\t" << counter << "\n";
        ++char_increment;
        ++counter;
    }
}