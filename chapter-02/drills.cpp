#include "../PPPheaders.h"

int main()
{
    // Drill 1
    string first_name;
    string last_name;

    cout << "Enter the name of the person you want to write to:\n";
    cin >> first_name >> last_name;
    cout << "\nDear " << first_name << " " << last_name << ",\n\n";

    // Drill 2
    cout << "    How are you? I am fine. I miss you.\n"
         << "The weather lately has been atrocious.\n"
         << "The heat beats down on us every day and\n"
         << "it feels like there is no end in sight.\n\n";

    // Drill 3
    string friend_name;
    cout << "Enter the name of another friend:\n";
    cin >> friend_name;
    cout << "\nHave you seen " << friend_name << " lately?\n\n";

    // Drill 4
    int age = 0;
    cout << "Enter the recipient's age:\n";
    cin >> age;
    if (age < 0 || age > 110)
    {
        simple_error("You're kidding!");
    }
    else
    {
        cout << "\nI hear you just had a birthday and you are " << age << " years old.\n\n";
    }

    if (age < 12)
    {
        cout << "Next year you will be " << age + 1 << "\n\n";
    }
    else if (age == 17)
    {
        cout << "Next year you will be able to vote.\n\n";
    }
    else if (age > 70)
    {
        cout << "Are you retired?\n\n";
    }

    cout << "Yours sincerely,\n\n\n"
         << "MN\n";

    return 0;
}