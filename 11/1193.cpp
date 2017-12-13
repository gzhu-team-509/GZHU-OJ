#include <iostream>
using namespace std;

int n;

int main()
{
    while (cin >> n)
    {
        double res = 0;
        for (; n > 0; n--)
        {
            res += 1 / (2 * (double)n - 1);
        }
        cout.flags(cout.fixed);
        cout.precision(6);
        cout << res << endl;
    }

    return 0;
}
