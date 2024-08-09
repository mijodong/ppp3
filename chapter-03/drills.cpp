#include "../PPPheaders.h"

int main()
{
    // Drill 7
    constexpr double cm_per_m = 100;
    constexpr double cm_per_in = 2.54;
    constexpr double in_per_ft = 12;

    double i;
    double smallest = 999999999999999;
    double largest = -999999999999999;
    double i_as_m;
    double smallest_as_m;
    double largest_as_m;
    string uom;
    string smallest_uom;
    string largest_uom;

    while (cin >> i >> uom)
    {
        cout << i << " " << uom;

        // convert input to m as a base comparison value
        if (uom == "cm")
        {
            i_as_m = i / cm_per_m;
        }
        else if (uom == "in")
        {
            i_as_m = i * cm_per_in / cm_per_m;
        }
        else if (uom == "ft")
        {
            i_as_m = i * in_per_ft * cm_per_in / cm_per_m;
        }
        else
        {
            i_as_m = i;
        }

        // check if smallest
        if (smallest_uom != "")
        {
            if (i_as_m < smallest_as_m)
            {
                smallest = i;
                smallest_uom = uom;
                smallest_as_m = i_as_m;
                cout << " is the smallest so far";
            }
        }
        else
        {
            smallest = i;
            smallest_uom = uom;
            smallest_as_m = i_as_m;
            cout << " is the smallest so far";
        }

        // check if largest
        if (largest_uom != "")
        {
            if (i_as_m > largest_as_m)
            {
                largest = i;
                largest_uom = uom;
                largest_as_m = i_as_m;
                cout << " is the largest so far";
            }
        }
        else
        {
            largest = i;
            largest_uom = uom;
            largest_as_m = i_as_m;
            cout << " and is also the largest so far";
        }

        cout << '\n';
    }

    return 0;
}