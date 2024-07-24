#include "../PPPheaders.h"

int main()
{
    int i = 0;
    while (i < 26)
    {
        cout << char('a' + i) << '\t' << int(char('a' + i)) << '\n';
        ++i;
    }

    return 0;
}