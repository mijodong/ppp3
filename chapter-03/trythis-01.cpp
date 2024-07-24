#include "../PPPheaders.h"

int main()
{
    constexpr double jpy_per_usd = 156.108780;
    constexpr double nok_per_usd = 11.022613;
    constexpr double gbp_per_usd = 0.774057;
    double value = 1;
    char currency = ' ';

    cout << "Please enter an amount, followed by the currency (y, k, or p) to convert:\n";
    cin >> value >> currency;

    if (currency == 'y')
        cout << value << " JPY == " << value / jpy_per_usd << " USD\n";
    else if (currency == 'k')
        cout << value << " NOK == " << value / nok_per_usd << " USD\n";
    else if (currency == 'p')
        cout << value << " GBP == " << value / gbp_per_usd << " USD\n";
    else
        cout << "Sorry, I don't know that currency.\n";
}