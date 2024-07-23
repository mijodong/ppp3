#include "../PPPheaders.h"

int main()
{
    string user_input;

    cout << "Please give me a number spelled out (e.g. Zero, One, Two, etc.): ";
    cin >> user_input;

    if (user_input == "Zero" || user_input == "zero")
    {
        cout << "0\n";
    }
    else if (user_input == "One" || user_input == "one")
    {
        cout << "1\n";
    }
    else if (user_input == "Two" || user_input == "two")
    {
        cout << "2\n";
    }
    else if (user_input == "Three" || user_input == "three")
    {
        cout << "3\n";
    }
    else if (user_input == "Four" || user_input == "four")
    {
        cout << "4\n";
    }
    else if (user_input == "Five" || user_input == "five")
    {
        cout << "5\n";
    }
    else if (user_input == "Six" || user_input == "six")
    {
        cout << "6\n";
    }
    else if (user_input == "Seven" || user_input == "seven")
    {
        cout << "7\n";
    }
    else if (user_input == "Eight" || user_input == "eight")
    {
        cout << "8\n";
    }
    else if (user_input == "Nine" || user_input == "nine")
    {
        cout << "9\n";
    }
    else if (user_input == "Ten" || user_input == "ten")
    {
        cout << "10\n";
    }
    else
    {
        cout << "Sorry, I don't know that number.\n";
    }

    return 0;
}