// Author: Neeraj Mishra nmcnemis@gmail.com

// I have used "std" extensively, as not using namespace is considered a good practice. But if the code is huge, and instead of repeating
// I think it is better to use "std".

#include <iostream>
# include <string.h>

// Function to check if age is valid.
void simple_error(int age)
{
    if (age <= 0 || age > 110)
    {
        std::cout << "You are kidding!";
    }
}

// Function to display remarks based on age.
void age_remarks(int age)
{
    if (age < 12)
    {
        std::cout << "Next year you would be " << (age + 1) << " years old. \n";
    }

    if (age == 17)
    {
        std::cout << "Next year you will be able to vote. \n";
    }

    if (age > 70)
    {
        std::cout << "I hope you are enjoying retirement. \n";
    }
}

// This program is like a template for a letter.
int main()
{
    std::cout << "Enter the name of the person you want to write to: ";
    std::string first_name;
    std::cin >> first_name;
    
    // It is the heading and intro of the letter.
    std::cout << "Dear " << first_name << ",\n";
    std::cout << "How have you been? It's been so long since I have heard from you... \n";
    std::cout << "I wish to meet you this coming month, I miss you) \n";
    
    // This asks for details of a friend.
    std::cout << "Enter the name of your friend: ";
    std::string friend_name;
    std::cin >> friend_name;
    std::cout << "Have you seen " << friend_name << " lately? \n";
    
    std::cout << "Please enter friend's sex (m, f): ";
    char friend_sex;
    friend_sex = 0;
    std::cin >> friend_sex;
    
    // Conditions to check friend's gender.
    if (friend_sex == 'm')
    {
        std::cout << "If you see " << friend_name << " please ask him to call me. \n";
    }
    if (friend_sex == 'f')
    {
        std::cout << "If you see " << friend_name << " please ask her to call me. \n";
    }

    // Based on the age we will call the 2 functions below.
    std::cout << "Enter your age: ";
    int age;
    std::cin >> age;

    simple_error(age);

    age_remarks(age);

    // This is the footer of the letter.
    std::cout << "Yours sincerely, \n\n";
    std::cout << "Signature: \n";
    std::cout << "Nemis.\n";
}
