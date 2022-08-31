// Author: Neeraj Mishra nmcnemis@gmail.com

#include <iostream>

using std::cout;
using std::cin;

int main()
{
    cout << "Please give the following details. \n";
    int penny, nickel, dime, quarter, half_dollar, dollar;
    cout << "Number of penny/pennies: ";
    cin >> penny;
    cout << "\n";
    cout << "Number of nickel(s): ";
    cin >> nickel;
    cout << "\n";
    cout << "Number of dime(s): ";
    cin >> dime;
    cout << "\n";
    cout << "Number of quarter(s): ";
    cin >> quarter;
    cout << "\n";
    cout << "Number of half $ coins(s): ";
    cin >> half_dollar;
    cout << "\n";
    cout << "Number of 1 $ coin(s): ";
    cin >> dollar;
    cout << "\n";

    cout << "You have the following. \n";
    if (penny <= 1)
    {
        cout << "Penny: " << penny;
    }
    else
    {
        cout << "Pennies: " << penny;
    }
    cout << "\n";
    if (nickel <= 1)
    {
        cout << "Nickel: " << nickel;
    }
    else
    {
        cout << "Nickels: " << nickel;
    }
    cout << "\n";
    if (dime <= 1)
    {
        cout << "Dime: " << dime;
    }
    else
    {
        cout << "Dimes: " << dime;
    }
    cout << "\n";
    if (quarter <= 1)
    {
        cout << "Quarter: " << quarter;
    }
    else
    {
        cout << "Quarters: " << quarter;
    }
    cout << "\n";
    if (half_dollar <= 1)
    {
        cout << "Half $ coin: " << half_dollar;
    }
    else
    {
        cout << "Half $ coins: " << half_dollar;
    }
    cout << "\n";
    if (dollar <= 1)
    {
        cout << "1 $ coin: " << dollar;
    }
    else
    {
        cout << "1 $ coins: " << dollar;
    }
    cout << "\n";

    float total_coins = penny + nickel * 5 + dime * 10 + quarter * 25 + half_dollar * 50 + dollar * 100;
    cout << "The total value in cents is: " << total_coins;
    cout << "\n";
    cout << "The total value in dollar is: $" << total_coins / 100;
}