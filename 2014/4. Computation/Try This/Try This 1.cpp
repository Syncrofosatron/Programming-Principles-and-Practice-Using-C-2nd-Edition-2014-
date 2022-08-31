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

    switch (money_convert)
    {
        case 'R': case 'r':
            cout << 0.75 * money_rupee << " Rouble(s).";
            break;
        case 'Y': case 'y':
            cout << 1.72 * money_rupee << " Rouble(s).";
            break;
        case 'P': case 'p':
            cout << 11.8 * money_rupee << " Rouble(s).";
            break;
        case 'W': case 'w':
            cout << 16.84 * money_rupee << " Rouble(s).";
            break;
        
        default:
            cout << "Invalid choice.";
            break;
    }
}