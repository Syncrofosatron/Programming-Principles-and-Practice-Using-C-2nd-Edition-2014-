// Author: Neeraj Mishra nmcnemis@gmail.com

#include <iostream>

using std::cout;
using std::cin;

int square_by_addition(int num)
{
    int square = 0;
    for (int i = 0; i < num; ++ i)
    {
        square += num;
    }
    return square;
}

int main()
{
    cout << "Enter a number to find square of: ";
    int n;
    cin >> n;
    cout << "\n";
    cout << "Square of " << n << " is: " << square_by_addition(n);
}