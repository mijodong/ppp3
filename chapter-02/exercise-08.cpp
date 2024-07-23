#include "../PPPheaders.h"

int main()
{
    int test;

    cout << "Input an integer to test if it is odd or even: \n";
    cin >> test;

    if (test % 2 == 0)
    {
        cout << "The value " << test << " is an even number.\n";
    }
    else
    {
        cout << "The value " << test << " is an odd number.\n";
    }

    return 0;
}