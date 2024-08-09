#include "../PPPheaders.h"

int main()
{
    // Drill 2
    int i, j;
    while (cin >> i >> j)
    {
        if (i < j)
        {
            cout << "The smaller value is: " << i << '\n';
            cout << "The larger value is: " << j << '\n';
        }
        else
        {
            cout << "The smaller value is: " << j << '\n';
            cout << "The larger value is: " << i << '\n';
        }
    }

    return 0;
}