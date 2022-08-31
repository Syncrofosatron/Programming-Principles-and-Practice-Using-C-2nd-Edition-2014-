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
        if (unit == "y" || unit == "yard" || unit == "meter" || unit == "km" || unit == "gallons")
        {
            cout << "Unexpected unit value. Value rejected.";
        }
        cout << "\n";
    }
}

// Wow, this code works better than expected.
// Because if we type input as "1m, 1 m or 1 *enter* m", it will work the same! :O
