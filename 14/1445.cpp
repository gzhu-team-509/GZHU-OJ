#include <iostream>
using namespace std;

unsigned long long pow_and_mod(int a, int b, int c)
{
    unsigned long long ans = 1, base = a;
    while (b)
    {
        if (b&1) ans *= base;
        base *= base;
        b >>= 1;
        base %= c;
        ans %= c;
    }
    return ans;
}

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        cout << pow_and_mod(a, b, 1000000007) << endl;
    }
}
