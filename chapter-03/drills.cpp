#include "../PPPheaders.h"

int main()
{
    // Drill 4
    double i, j;
    while (cin >> i >> j)
    {
        if (i < j)
        {
            cout << "The smaller value is: " << i << '\n';
            cout << "The larger value is: " << j << '\n';
        }
        else if (j < i)
        {
            cout << "The smaller value is: " << j << '\n';
            cout << "The larger value is: " << i << '\n';
        }
        else
        {
            cout << "The inputs are equal." << '\n';
        }
    }

    return 0;
}