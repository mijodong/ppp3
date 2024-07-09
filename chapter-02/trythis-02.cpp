#include "../PPPheaders.h"

int main()
{
    cout << "Please enter an integer value: ";
    int n = 0;
    cin >> n;
    cout << "n == " << n
         << "\nn+1 == " << n + 1
         << "\nn-1 == " << n - 1
         << "\nthree times n == " << 3 * n
         << "\ntwice n == " << n + n
         << "\nn squared == " << n * n
         << "\nhalf of n == " << n / 2
         << "\nthe remainder of half of n == " << n % 2
         << "\nsquare root of n == " << sqrt(n)
         << '\n';
}