// Author: Neeraj Mishra nmcnemis@gmail.com

#include <iostream>

using std::cout;
using std::cin;

int main()
{
    cout << "Enter an operator (+, -, *, /) and 2 operands values to perform the required operation (e.g. + 7 9): ";
    char symbol;
    symbol = 0;
    double val1, val2;
    cin >> symbol >> val1 >> val2;

    if (symbol == '+')
        cout << val1 + val2;
    if (symbol == '-')
        cout << val2 - val1;
    if (symbol == '*')
        cout << val1 * val2;
    if (symbol == '/')
        cout << val1 / val2;
}