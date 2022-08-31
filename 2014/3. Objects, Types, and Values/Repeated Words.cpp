#include <iostream>
//#include <string.h>

int main()
{
    std::string previous = " "; // previous word; initialized to “not a word”
    std::string current; // current word
    int count_words, word_in_position;
    while (std::cin >> current)  // read a stream of words
    {
        ++count_words;
        if (previous == current) // check if the word is the same as last
        {
            word_in_position = count_words - 1; // As the position of first repeated word would be before later.
            std::cout << "repeated word: " << current << ", word count: " << word_in_position << '\n';
        }
        previous = current;
    }
}
