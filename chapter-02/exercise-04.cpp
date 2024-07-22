#include "../PPPheaders.h"

int main()
{
    int val1;
    int val2;

    cout << "Please enter two integer values: ";
    cin >> val1 >> val2;

    if (val1 < val2)
    {
        cout << "\nThe smaller integer is:\t\t\t" << val1 << "\n"
             << "The larger integer is:\t\t\t" << val2 << "\n";
    }
    else
    {
        cout << "\nThe smaller integer is:\t\t\t" << val2 << "\n"
             << "The larger integer is:\t\t\t" << val1 << "\n";
    }

    cout << "\nThe sum of " << val1 << " and " << val2 << " is:\t\t" << val1 + val2 << "\n";
    cout << "The difference of " << val1 << " and " << val2 << " is:\t\t" << val1 - val2 << "\n";
    cout << "The product of " << val1 << " and " << val2 << " is:\t\t" << val1 * val2 << "\n";
    cout << "The ratio of " << val1 << " and " << val2 << " is:\t\t" << val1 / val2 << "\n\n";
}