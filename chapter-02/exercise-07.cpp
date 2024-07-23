#include "../PPPheaders.h"

int main()
{
    string str1;
    string str2;
    string str3;

    cout << "Please enter 3 string values to sort: ";
    cin >> str1 >> str2 >> str3;

    if (str1 < str2)
    {
        if (str2 < str3)
        {
            cout << str1 << ", " << str2 << ", " << str3 << '\n';
        }
        else if (str1 < str3)
        {
            cout << str1 << ", " << str3 << ", " << str2 << '\n';
        }
        else
        {
            cout << str3 << ", " << str1 << ", " << str2 << '\n';
        }
    }
    else if (str2 < str1)
    {
        if (str1 < str3)
        {
            cout << str2 << ", " << str1 << ", " << str3 << '\n';
        }
        else if (str2 < str3)
        {
            cout << str2 << ", " << str3 << ", " << str1 << '\n';
        }
        else
        {
            cout << str3 << ", " << str2 << ", " << str1 << '\n';
        }
    }

    return 0;
}