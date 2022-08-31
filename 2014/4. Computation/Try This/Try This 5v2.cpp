// Author: Neeraj Mishra nmcnemis@gmail.com

#include <iostream>
#include <vector>

using std::cout;
using std::cin;

std::vector<std::string> forbidden_words = {
        "fuck", "shit", "damn", "bitch", "ass"
    };

std::string check_profanity(std::string word)
{
    for (int i = 0; i < forbidden_words.size(); ++i)
    {
        if (word == forbidden_words[i])
        {
            word = "bleep";
        }
    }
    return word;
}

int main()
{   
    cout << "Enter your sentence please (profane words will be bleeped): \n";
    std::vector<std::string> sentence;
    std::string word;
    std::string censored_word;
    for (word; cin >> word; )
    {
        sentence.push_back(word);
        censored_word = check_profanity(word);
        cout << censored_word << "\n";
    }
}