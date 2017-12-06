/**
 * Maxim and Discounts
 * http://codeforces.com/contest/261/problem/A
 *
**/
#include <cstdio>
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

const int MAXN = 100050;

int item[MAXN];

int main()
{
    int dcnt;
    while (scanf("%d", &dcnt) == 1)
    {
        int discount = MAXN;
        for (int i = 0; i < dcnt; i++)
        {
            int tmp; scanf("%d", &tmp);
            discount = min(discount, tmp);
        }

        int icnt; scanf("%d", &icnt);
        for (int i = 1; i <= icnt; i++) scanf("%d", &item[i]);

        sort(item + 1, item + 1 + icnt, greater<int>());

        long long cost = 0, dealed = 0;
        while (dealed < icnt)
        {
            if (((icnt - dealed) / discount) == 0)
            {
                cost += item[++dealed];
            }
            else
            {
                for (int i = 0; i < discount; i++)
                    cost += item[++dealed];
                dealed += 2;
            }
        }

        printf("%lld\n", cost);
    }
}
