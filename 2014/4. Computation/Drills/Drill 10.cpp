// Author: Neeraj Mishra nmcnemis@gmail.com

#include <iostream>
#include <string.h>
#include <vector>

using std::cout;
using std::cin;

int main()
{
    cout << "Either input number *space* unit, number *enter* unit, or number*no space*unit. \n";
    double i = 0;
    double sum = 0;
    std::string unit;
    std::vector<double> number_storage;

    while (cin >> i)
    {
        cin >> unit;

        if (unit == "cm")
        {
            i /= 100;
        }
        if (unit == "in")
        {
            i *= 2.54/100;
        }
        if (unit == "ft")
        {
            i *= 30.48/100;
        }

        number_storage.push_back(i);

        sum += i;

        cout << "Sum: " << sum << "\n";
        for (int i = 0; i < number_storage.size(); ++i)
        {
            cout << number_storage[i] << " ";
        }
        cout << "\n";
    }
}
