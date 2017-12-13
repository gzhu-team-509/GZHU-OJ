#include <cstdio>
using namespace std;

int main()
{
    long long y, k, n;
    while (scanf("%lld%lld%lld", &y, &k, &n) == 3)
    {
        long long cnt = 0;
        for (long long tot = y / k * k + k; tot <= n; tot += k)
        {
            if (cnt++) printf(" ");
            printf("%lld", tot - y);
        }
        if (cnt == 0) printf("-1\n");
        else printf("\n");
    }
}
