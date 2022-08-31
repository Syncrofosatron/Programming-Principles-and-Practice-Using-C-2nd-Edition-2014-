// Author: Neeraj Mishra nmcnemis@gmail.com

#include <iostream>

using std::cout;
using std::cin;

int main()
{
    double i = 0, j = 0;
    double threshold = 1.0/100;
    double big = 0, small = 0;

    while (cin >> i >> j)
    {
        if (i > j)
        {
            big = i;
            small = j;
        }
        else
        {
            big = j;
            small = i;
        }

        if (big - small >= 0 && big - small <= threshold)
        {
            cout << "The numbers are almost equal. \n";
            cout << big - small << " " << threshold << "\n";
        }
        else
        {
            cout << "The numbers are not almost equal. \n";
            cout << big - small << " " << threshold << "\n";
        }
    }
}
