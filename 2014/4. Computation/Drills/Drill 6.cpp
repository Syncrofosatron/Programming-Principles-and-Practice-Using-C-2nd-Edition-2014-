// Author: Neeraj Mishra nmcnemis@gmail.com

#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

int main()
{
    double i = 0;
    vector<double> integer_storage;

    while (cin >> i)
    {
        integer_storage.push_back(i);
        sort(integer_storage.begin(), integer_storage.end());
        for (int i = 0; i < integer_storage.size(); ++i)
        {
            cout << integer_storage[i] << " ";
        }
        cout << "\n";
    }
}

// This works in online compliers but not here for some reason.
