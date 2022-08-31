// Author: Neeraj Mishra nmcnemis@gmail.com

#include <iostream>

using std::cout;
using std::cin;

int main()
{
    cout << "Enter 2 numbers: ";
    int val1, val2;
    cin >> val1 >> val2;
    cout << "\n";

    if (val1 > val2)
    {
        cout << val2 << " is smaller. \n";
        cout << val1 << " is larger. \n";
    }
    else
    {
        cout << val1 << " is smaller. \n";
        cout << val2 << " is larger. \n";
    }

    cout << "Sum is: " << val1 + val2;
    cout << "\n";
    cout << "Difference is: " << val2 - val1;
    cout << "\n";
    cout << "Product is: " << val1 * val2;
    cout << "\n";
    cout << "Ratio is: " << val1 << ":" << val2;
}