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

        // 将价格从小到大排列，每discount个使用一次折扣
        long long cost = 0;
        long long dealed = 0, cur = 0;
        while (dealed < icnt)
        {
            if (cur == discount)
            {
                cur = 0;
                dealed += 2;
            }
            cost += item[++dealed];
            cur++;
        }

        printf("%lld\n", cost);
    }
}
