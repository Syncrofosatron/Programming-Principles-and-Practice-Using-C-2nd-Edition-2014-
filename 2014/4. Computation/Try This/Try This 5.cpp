// Author: Neeraj Mishra nmcnemis@gmail.com

#include <iostream>
#include <vector>

using std::cout;
using std::cin;

int main()
{
    std::vector<std::string> forbidden_words = {
        "fuck", "shit", "damn", "bitch", "ass"
    };
    
    cout << "Enter your sentence please (profane words will be bleeped): ";
    std::vector<std::string> sentence;
    std::string word;
    for (int i = 0; i < 5; ++i)
    {
        cin >> word;
        sentence.push_back(word);
    }

    int size_sentence = sentence.size();
    int size_forbidden = forbidden_words.size();

    for (int i = 0; i < size_sentence; ++i)
    {
        for (int j = 0; j < size_forbidden; ++j)
        {
            if (sentence[i] == forbidden_words[j])
            {
                sentence[i].pop_back();
                sentence[i] == "bleep";
            }
        }
    }

    cout << "Output: ";

    for (int i = 0; i < size_sentence; ++i)
    {
        cout << sentence[i] << " ";
    }
}

// The output comes weird, some character just disappears in the output.
