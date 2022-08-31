// Author: Neeraj Mishra nmcnemis@gmail.com

#include <iostream>

using std::cout;
using std::cin;

int main()
{
    cout << "Enter a number: ";
    int val1;
    cin >> val1;

    if (val1 % 2 == 0)
    {
        cout << "The value " << val1 << " is an even number. \n";
    }
    else
    {
        cout << "The value " << val1 << " is an odd number. \n";
    }
}