#include "../PPPheaders.h"

int main()
{
    int pennies = 0;
    int nickels = 0;
    int dimes = 0;
    int quarters = 0;
    int half_dollars = 0;
    int sum = 0;

    cout << "How many pennies do you have? ";
    cin >> pennies;
    cout << "How many nickels do you have? ";
    cin >> nickels;
    cout << "How many dimes do you have? ";
    cin >> dimes;
    cout << "How many quarters do you have? ";
    cin >> quarters;
    cout << "How many half dollars do you have? ";
    cin >> half_dollars;

    cout << '\n';

    if (pennies == 1)
    {
        cout << "You have " << pennies << " penny.\n";
    }
    else
    {
        cout << "You have " << pennies << " pennies.\n";
    }
    if (nickels == 1)
    {

        cout << "You have " << nickels << " nickel.\n";
    }
    else
    {

        cout << "You have " << nickels << " nickels.\n";
    }
    if (dimes == 1)
    {

        cout << "You have " << dimes << " dime.\n";
    }
    else
    {
        cout << "You have " << dimes << " dimes.\n";
    }
    if (quarters == 1)
    {

        cout << "You have " << quarters << " quarter.\n";
    }
    else
    {
        cout << "You have " << quarters << " quarters.\n";
    }
    if (half_dollars == 1)
    {
        cout << "You have " << half_dollars << " half dollar.\n";
    }
    else
    {
        cout << "You have " << half_dollars << " half dollars.\n";
    }

    sum = pennies * 1 + nickels * 5 + dimes * 10 + quarters * 25 + half_dollars * 50;

    if (sum == 1)
    {
        cout << "The value of all of your coins is " << sum << " cent.\n";
    }
    else
    {
        cout << "The value of all of your coins is " << sum << " cents.\n";
    }

    return 0;
}