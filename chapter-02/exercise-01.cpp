#include "../PPPheaders.h"

int main()
{
    double miles;

    cout << "Please enter the number of miles you want to convert to kilometers: ";
    cin >> miles;
    cout << miles << " mile(s) is equal to " << miles * 1.609 << " kilometer(s).";

    return 0;
}