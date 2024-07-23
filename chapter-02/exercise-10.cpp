#include "../PPPheaders.h"

int main()
{
    string operation;
    double val1;
    double val2;

    cout << "Please enter an operand followed by 2 values: ";
    cin >> operation >> val1 >> val2;

    if (operation == "+" || operation == "plus")
    {
        cout << val1 << " + " << val2 << " = " << val1 + val2 << '\n';
    }
    else if (operation == "-" || operation == "minus")
    {
        cout << val1 << " - " << val2 << " = " << val1 - val2 << '\n';
    }
    else if (operation == "*" || operation == "mul")
    {
        cout << val1 << " * " << val2 << " = " << val1 * val2 << '\n';
    }
    else if (operation == "/" || operation == "div")
    {
        cout << val1 << " / " << val2 << " = " << val1 / val2 << '\n';
    }
    else
    {
        cout << "Sorry, I don't know that operation yet.\n";
    }

    return 0;
}