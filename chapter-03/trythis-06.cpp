#include "../PPPheaders.h"

int main()
{
    vector<string> disliked_words = {"interviewing", "chimichanga"};

    vector<string> words;
    for (string word; cin >> word;) // read whitespace-separated words
        words.push_back(word);      // put into vector

    cout << "Number of words: " << words.size() << '\n';

    ranges::sort(words); // sort the words

    bool disliked = false;
    bool repeat = false;

    for (int i = 0; i < words.size(); ++i)
    {
        disliked = false;
        repeat = false;
        if (i == 0 || words[i - 1] != words[i])
        { // is this a new word?
            for (string j : disliked_words)
                if (words[i] == j)
                    disliked = true;
        }
        else
        {
            repeat = true;
        }

        if (repeat == false)
        {
            if (disliked == true)
                cout << "bleep\n";
            else
                cout << words[i] << '\n';
        }
    }

    return 0;
}