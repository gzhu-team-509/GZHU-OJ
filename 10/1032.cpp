/* UGLY HACK */
#include <iostream>
#include <cstdio>
using namespace std;

long long qpow(int a, int b)
{
    long long ans = 0, product = 1;
    for (int i = 1; i <= b; i++)
    {
        product *= a;
        product %= 1000000007;
        ans += product;
        ans %= 1000000007;
    }
    return ans;
}

int main()
{
    int n, k;
    while (scanf("%d%d", &n, &k) == 2)
    {
        long long ans = qpow(n, k);
        printf("%lld\n", ans);
    }
}
