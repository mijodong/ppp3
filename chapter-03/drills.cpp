#include "../PPPheaders.h"

int main()
{
    // Drill 5
    double i, j;
    while (cin >> i >> j)
    {
        if (i < j)
        {
            cout << "The smaller value is: " << i << '\n';
            cout << "The larger value is: " << j << '\n';
            if (abs(j - i) < 1.0 / 100)
                cout << "The numbers are almost equal!" << '\n';
        }
        else if (j < i)
        {
            cout << "The smaller value is: " << j << '\n';
            cout << "The larger value is: " << i << '\n';
            if (abs(i - j) < 1.0 / 100)
                cout << "The numbers are almost equal!" << '\n';
        }
        else
        {
            cout << "The inputs are equal." << '\n';
        }
    }

    return 0;
}