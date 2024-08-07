#include "../PPPheaders.h"

int main()
{
    // Drill 11
    constexpr double cm_per_m = 100;
    constexpr double cm_per_in = 2.54;
    constexpr double in_per_ft = 12;

    double i;
    double smallest = 999999999999999;
    double largest = -999999999999999;
    double i_as_m;
    double smallest_as_m;
    double largest_as_m;
    double i_as_m_sum = 0;
    double smallest_as_m_sum = 0;
    double largest_as_m_sum = 0;
    int i_inputs = 0;
    string uom;
    string smallest_uom;
    string largest_uom;
    vector<double> i_values;

    while (cin >> i >> uom)
    {
        if (uom == "cm" || uom == "m" || uom == "in" || uom == "ft")
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

                    smallest_as_m_sum += smallest_as_m;
                }
            }
            else
            {
                smallest = i;
                smallest_uom = uom;
                smallest_as_m = i_as_m;
                cout << " is the smallest so far";

                smallest_as_m_sum += smallest_as_m;
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

                    largest_as_m_sum += largest_as_m;
                }
            }
            else
            {
                largest = i;
                largest_uom = uom;
                largest_as_m = i_as_m;
                cout << " and is also the largest so far";

                largest_as_m_sum += largest_as_m;
            }

            i_as_m_sum += i_as_m;
            i_values.push_back(i_as_m);
            ++i_inputs;
        }
        else
        {
            cout << uom << " is an illegal unit. Please enter a legal unit: cm, m, in, or ft\n";
        }
        cout << '\n';
    }

    cout << "\nThe smallest value was: " << smallest << " " << smallest_uom << '\n';
    cout << "The largest value was: " << largest << " " << largest_uom << '\n';
    cout << "The were " << i_inputs << " valid inputs\n";
    cout << i_as_m_sum << "m is the sum of all valid inputs\n";
    cout << smallest_as_m_sum << "m is the sum of all of the smallest inputs\n";
    cout << largest_as_m_sum << "m is the sum of all of the largest inputs\n";

    ranges::sort(i_values);
    cout << "\nAll entries as meters: \n";

    for (double x : i_values)
        cout << x << "m\n";

    return 0;
}