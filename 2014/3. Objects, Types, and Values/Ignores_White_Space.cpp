#include <iostream>
#include <string.h>

// read name and age
int main()
{
    std::cout << "Please enter your first name and age\n";
    std::string first_name; // string variable
    int age; // integer variable
    std::cin >> first_name; // read a string
    std::cin >> age; // read an integer
    // If input will be Anne 21, << operator will ignore the whitespace and reading of string (name) will terminate.
    std::cout << "Hello, " << first_name << " (age " << age << ")\n";

    return 0;
}