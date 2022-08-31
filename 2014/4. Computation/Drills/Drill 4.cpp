// Author: Neeraj Mishra nmcnemis@gmail.com

#include <iostream>

using std::cout;
using std::cin;

int main()
{
    double i = 0, j = 0;

    while (cin >> i >> j)
    {
        if (i > j)
        {
            cout << "The larger value is: " << i;
            cout << "\n";
            cout << "The smaller value is: " << j;
        }
        else
            if (j > i)
            {
                cout << "The larger value is: " << j;
                cout << "\n";
                cout << "The smaller value is: " << i;
            }
        else
            {
                cout << "The numbers are equal.";
            }
        cout << "\n";
    }
}
