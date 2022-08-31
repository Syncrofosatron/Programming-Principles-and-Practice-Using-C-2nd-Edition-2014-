// Author: Neeraj Mishra nmcnemis@gmail.com

#include <iostream>
#include <math.h>

/*
Get this little program to run. Then, modify it to read an int rather than a double. Note that sqrt() is not defined
for an int so assign n to a double and take sqrt() of that. Also, “exercise” some other operations. Note that for
ints / is integer division and % is remainder (modulo), so that 5/2 is 2 (and not 2.5 or 3) and 5%2 is 1. The
definitions of integer *, /, and % guarantee that for two positive ints a and b we have a/b * b + a%b == a.
*/

int main()
{
    std::cout << "Please enter a number: ";
    int n;
    std::cin >> n;
    double nn = n;
    std::cout << std::sqrt(nn) <<"\n";

// Don't mind the if statement for now, just keep in mind here that I am seeing if the equation that is written in the prompt (book) is true.
    std::cout << "Enter 2 numbers: ";
    int a, b;
    std::cin >> a >> b;
    if ((a/b) * b + (a%b) == a)
    {
        std::cout << "Same. \n";
    }
    else
    {
        std::cout << "Not same. \n";
    }

    return 0;
}