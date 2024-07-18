#include "../PPPheaders.h"

int main()
{
    string previous;       // previous word; initalized to ""
    string current;        // current word
    while (cin >> current) // read a stream of words
    {
        if (previous == current) // check if the word is the same as last
            cout << "repeated word: " << current << '\n';
        previous = current;
    }

    return 0;
}