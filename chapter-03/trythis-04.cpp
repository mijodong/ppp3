#include "../PPPheaders.h"

int main()
{
    // print out all lower case letters
    for (int i = 0; i < 26; ++i)
        cout << char('a' + i) << '\t' << int(char('a' + i)) << '\n';

    cout << "\n\n";

    for (int i = 0; i < 26; ++i)
        cout << char('A' + i) << '\t' << int(char('A' + i)) << '\n';

    cout << "\n\n";

    for (int i = 0; i < 10; ++i)
        cout << char('0' + i) << '\t' << int(char('0' + i)) << '\n';

    return 0;
}