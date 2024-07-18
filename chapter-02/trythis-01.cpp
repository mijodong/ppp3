#include "../PPPheaders.h"

int main()
{
    cout << "Please enter your first and age:\n";
    string first_name = "???"; // striing variable ("???" indicates "don't know the name")
    double age = -1;           // double variable (-1 means "don't know the age")
    cin >> first_name >> age;  // read a string followed by a double
    cout << "Hello, " << first_name << " (age " << age * 12 << " months).\n";

    return 0;
}