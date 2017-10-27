/* 斐波那契数列数列的通项公式 */

/* 无法得出正确结果，斐波那契数列增长得很快，在给定范围内直接计算效率很低而且超出范围 */
/*
#include <iostream>
using namespace std;

int n;
unsigned long long num[102] = {0, 1, 2};

int main()
{
    for (int i = 3; i <= 101; i++)
    {
        num[i] = num[i - 1] + num[i - 2];
    }

    cout.flags(cout.fixed);
    cout.precision(3);
    
    while (cin >> n)
    {
        long double res = 0;
        for (int i = 1; i <= n; i++)
        {
            res += (long double)num[i + 1] / num[i];
        }    
        cout << res << endl;
    }
}
*/
