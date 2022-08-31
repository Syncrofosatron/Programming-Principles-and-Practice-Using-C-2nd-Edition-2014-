// Author: Neeraj Mishra nmcnemis@gmail.com

#include <iostream>
#include <string.h>

using std::cout;
using std::cin;

int main()
{
    cout << "Enter 3 names: ";
    std::string name1, name2, name3;
    cin >> name1 >> name2 >> name3;

    // Statements taking care of finding the 1st and 2nd biggest name and then putting then in increasing order pattern (alphabetical order).
    if (name1 > name2 && name1 > name3)
    {
        if (name2 > name3)
            cout << "Sequence is as follows: " << name3 << " " << name2 << " " << name1;
        else
            cout << "Sequence is as follows: " << name2 << " " << name3 << " " << name1;
    }
    if (name2 > name1 && name2 > name3)
    {
        if (name1 > name3)
            cout << "Sequence is as follows: " << name3 << " " << name1 << " " << name2;
        else
            cout << "Sequence is as follows: " << name1 << " " << name3 << " " << name2;
    }
    if (name3 > name2 && name3 > name1)
    {
        if (name2 > name1)
            cout << "Sequence is as follows: " << name1 << " " << name2 << " " << name3;
        else
            cout << "Sequence is as follows: " << name2 << " " << name1 << " " << name3;
    }

    // Statements taking care of 2 equal or all equal names (alphabetical).
    if (name1 == name2 && name2 == name3)
        cout << "Sequence is as follows: " << name1 << " " << name2 << " " << name3;
    if (name1 == name3 && name1 < name3)
        cout << "Sequence is as follows: " << name1 << " " << name2 << " " << name3;
    if (name1 == name2 && name1 > name3)
        cout << "Sequence is as follows: " << name3 << " " << name2 << " " << name1;
    if (name2 == name3 && name1 < name3)
        cout << "Sequence is as follows: " << name1 << " " << name2 << " " << name3;

    cout << "\n";
}
