#include <iostream>

int main()
{
    int a {0};
    char c = a; // try to squeeze a large int into a small char
    int b = c;
    if (a != b) // != means “not equal”
    std::cout << "oops!: " << a << "!=" << b << '\n';
    else
    std::cout << "Wow! We have large characters\n";
}
