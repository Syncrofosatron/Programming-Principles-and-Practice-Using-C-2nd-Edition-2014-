// Author: Neeraj Mishra nmcnemis@gmail.com

#include <iostream>

using std::cout;
using std::cin;

int main()
{
    cout << "Enter money in rupees: ";
    double money_rupee;
    cin >> money_rupee;

    cout << "\n";

    cout << "Conversion steps as follows: \n";
    cout << "1. Rupees to Roubles (press R/r). \n";
    cout << "2. Rupees to Yen (press Y/y). \n";
    cout << "3. Rupees to Chilean Peso (press P/p). \n";
    cout << "4. Rupees to South Korean Won (press W/w). \n";
    char money_convert;
    cin >> money_convert;

    if (money_convert == 'R' || money_convert == 'r')
    {
        cout << 0.75 * money_rupee << " Rouble(s).";
    }
    if (money_convert == 'Y' || money_convert == 'y')
    {
        cout << money_rupee * 1.72 << " Yen(s).";
    }
    if (money_convert == 'P' || money_convert == 'p')
    {
        cout << 11.8 * money_rupee << " Chilean Peso(s).";
    }
    if (money_convert == 'W' || money_convert == 'w')
    {
        cout <<  16.84 * money_rupee << " South Korean Won(s).";
    }
}