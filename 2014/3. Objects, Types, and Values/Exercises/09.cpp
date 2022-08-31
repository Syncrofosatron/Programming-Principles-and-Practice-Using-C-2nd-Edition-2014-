// Author: Neeraj Mishra nmcnemis@gmail.com

#include <iostream>
#include <string.h>

using std::cout;
using std::cin;

int main()
{
    cout << "Enter number (0 - 4) in words: ";
    std::string number;
    cin >> number;

    if (number == "zero")
        cout << "0";
    else
    if (number == "one")
        cout << "1";
    else
    if (number == "two")
        cout << "2";
    else
    if (number == "three")
        cout << "3";
    else
    if (number == "four")
        cout << "4";
    else
        cout << "Hehe, no no.";
}