// Author: Neeraj Mishra nmcnemis@gmail.com

#include <iostream>

using std::cout;
using std::cin;

int main()
{
    cout << "Enter 3 integers: ";
    int val1, val2, val3;
    cin >> val1 >> val2 >> val3;

    // Statements taking care of finding the 1st and 2nd biggest number and then putting then in increasing order pattern.
    if (val1 > val2 && val1 > val3)
    {
        if (val2 > val3)
            cout << "Sequence is as follows: " << val3 << " " << val2 << " " << val1;
        else
            cout << "Sequence is as follows: " << val2 << " " << val3 << " " << val1;
    }
    if (val2 > val1 && val2 > val3)
    {
        if (val1 > val3)
            cout << "Sequence is as follows: " << val3 << " " << val1 << " " << val2;
        else
            cout << "Sequence is as follows: " << val1 << " " << val3 << " " << val2;
    }
    if (val3 > val2 && val3 > val1)
    {
        if (val2 > val1)
            cout << "Sequence is as follows: " << val1 << " " << val2 << " " << val3;
        else
            cout << "Sequence is as follows: " << val2 << " " << val1 << " " << val3;
    }

    // Statements taking care of 2 equal or all equal integers.
    if (val1 == val2 && val2 == val3)
        cout << "Sequence is as follows: " << val1 << " " << val2 << " " << val3;
    if (val1 == val3 && val1 < val3)
        cout << "Sequence is as follows: " << val1 << " " << val2 << " " << val3;
    if (val1 == val2 && val1 > val3)
        cout << "Sequence is as follows: " << val3 << " " << val2 << " " << val1;
    if (val2 == val3 && val1 < val3)
        cout << "Sequence is as follows: " << val1 << " " << val2 << " " << val3;

    cout << "\n";
}
