// Author: Neeraj Mishra nmcnemis@gmail.com

#include <iostream>
#include <string.h>

using std::cout;
using std::cin;

int main()
{
    double i = 0;
    std::string unit;

    while (cin >> i)
    {
        cin >> unit;

        if (unit == "cm" || unit == "m" || unit == "in" || unit == "ft")
        {
            cout << i << unit;
        }
    }
}
