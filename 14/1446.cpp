#include <cstdio>
using namespace std;

long long pow_and_mod(int a, int b, int c)
{
    long long ans = 1, base = a;
    while (b)
    {
        if (b&1) {
            ans *= base;
            ans %= c;
        }
        base *= base;
        b >>= 1;
        base %= c;
    }
    return ans;
}

int main()
{
    int a, b;
    while (scanf("%d%d", &a, &b) == 2)
    {
        printf("%lld\n", pow_and_mod(a, b, 1000000007));
    }
}
