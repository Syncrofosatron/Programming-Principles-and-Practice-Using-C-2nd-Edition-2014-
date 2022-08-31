// Author: Neeraj Mishra nmcnemis@gmail.com

#include <iostream>
#include <string.h>

/*
Get the “name and age” example to run. Then, modify it to write out the age in months: read the input in years and
multiply (using the * operator) by 12. Read the age into a double to allow for children who can be very proud of
being five and a half years old rather than just five.
*/

int main()
{
    std::cout << "Please enter your first name and age\n";
    std::string first_name; // string variable
    double age; // integer variable
    std::cin >> first_name; // read a string
    std::cin >> age; // read an integer
    age = age * 12.0;
    // If input will be Anne 21, << operator will ignore the whitespace and reading of string (name) will terminate.
    std::cout << "Hello, " << first_name << " (age " << age << " months)\n";

    return 0;
}