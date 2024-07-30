#include "../PPPheaders.h"

int square(int x)
{

    int x_squared = 0;
    for (int i = 0; i < x; ++i)
        x_squared += x;

    return x_squared;
}

int main()
{
    for (int i = 0; i < 100; ++i)
        cout << i << '\t' << square(i) << '\n';

    return 0;
}