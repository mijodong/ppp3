#include "../PPPheaders.h"

int main()
{
    double d = 0;
    while (cin >> d)
    {                                   // repeat the statements below as long as we type in numbers
        int i = d;                      // try to squeeze a floating-point value into an integer value
        char c = i;                     // try to squeeze an integer into a char
        cout << "d==" << d              // the original double
             << " i==" << i             // double converted to int
             << " c==" << c             // int value of char
             << " char(" << c << ")\n"; // the char
    }

    return 0;
}