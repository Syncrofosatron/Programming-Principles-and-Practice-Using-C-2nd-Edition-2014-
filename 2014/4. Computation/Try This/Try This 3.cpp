// Author: Neeraj Mishra nmcnemis@gmail.com

#include <iostream>

using std::cout;
using std::cin;

int main()
{    
    char lowercase_ascii = 'a';
    int counter = 0;

    cout << "********** Lowercase Letters *********** \n";

    for (int i = 97; i <= 122; ++i)
    {
        cout << char(lowercase_ascii + counter) << "\t" << i << "\n";
        ++counter;
    }

    char uppercase_ascii = 'A';
    counter = 0;

    cout << "********** Uppercase Letters *********** \n";

    for (int i = 65; i <= 90; ++i)
    {
        cout << char(uppercase_ascii + counter) << "\t" << i << "\n";
        ++counter;
    }

    char digit_ascii = '0';
    counter = 0;

    cout << "********** Digits *********** \n";

    for (int i = 48; i <= 57; ++i)
    {
        cout << char(digit_ascii + counter) << "\t" << i << "\n";
        ++counter;
    }
}