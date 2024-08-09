#include "../PPPheaders.h"

int main()
{
    // Drill 6
    double i;
    double smallest = 999999999999999;
    double largest = -999999999999999;

    while (cin >> i)
    {
        cout << i;
        if (i < smallest)
        {
            smallest = i;
            cout << " is the smallest so far";
        }
        if (i > largest)
        {
            if (i == smallest)
                cout << " and also";
            largest = i;
            cout << " is the largest so far";
        }
        cout << '\n';
    }

    return 0;
}