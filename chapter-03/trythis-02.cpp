#include "../PPPheaders.h"

int main()
{
    constexpr double jpy_per_usd = 156.108780;
    constexpr double nok_per_usd = 11.022613;
    constexpr double gbp_per_usd = 0.774057;
    constexpr double chf_per_usd = 0.891059;
    double value = 1;
    char currency = ' ';

    cout << "Please enter an amount, followed by the currency (y, k, p, or f) to convert:\n";
    cin >> value >> currency;

    switch (currency)
    {
    case 'y':
        cout << value << " JPY == " << value / jpy_per_usd << " USD\n";
        break;
    case 'k':
        cout << value << " NOK == " << value / nok_per_usd << " USD\n";
        break;
    case 'p':
        cout << value << " GBP == " << value / gbp_per_usd << " USD\n";
        break;
    case 'f':
        cout << value << " CHF == " << value / chf_per_usd << " USD\n";
        break;
    default:
        cout << "Sorry, I don't know that currency.\n";
        break;
    }
}