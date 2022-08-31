// Author: Neeraj Mishra nmcnemis@gmail.com

#include <iostream>

int main()
{
    std::cout << "Enter the quantity in miles: ";
    double miles;
    std::cin >> miles;
    std::cout << "\n";
    std::cout << miles << " miles equals " << (miles * 1.609) << " in kilometers.";
}
