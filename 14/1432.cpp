/* 快速幂Mod10 */
#include <iostream>
using namespace std;

long long pow_mod(long a, long b)
{
    long long ans = 1, base = a;
    while (b)
    {
        if (b & 1)
        {
            ans *= base;
            ans %= 10;
        }
        base *= base;
        base %= 10;
        b >>= 1;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << pow_mod(n, n) << endl;
    }
}
