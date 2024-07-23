#include "../PPPheaders.h"

int main()
{
    int num1;
    int num2;
    int num3;

    cout << "Please enter 3 integer values to sort: ";
    cin >> num1 >> num2 >> num3;

    if (num1 < num2)
    {
        if (num2 < num3)
        {
            cout << num1 << ", " << num2 << ", " << num3 << '\n';
        }
        else if (num1 < num3)
        {
            cout << num1 << ", " << num3 << ", " << num2 << '\n';
        }
        else
        {
            cout << num3 << ", " << num1 << ", " << num2 << '\n';
        }
    }
    else if (num2 < num1)
    {
        if (num1 < num3)
        {
            cout << num2 << ", " << num1 << ", " << num3 << '\n';
        }
        else if (num2 < num3)
        {
            cout << num2 << ", " << num3 << ", " << num1 << '\n';
        }
        else
        {
            cout << num3 << ", " << num2 << ", " << num1 << '\n';
        }
    }

    return 0;
}