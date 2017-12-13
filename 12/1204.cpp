/**
 * 这里不需要很高的精度，因此利用斐波那契数列数列的通项公式进行计算 
 * 注意如果使用递推的方法，数组要定义成double类型
**/
#include <iostream>
#include <cmath>
using namespace std;

double fibonacci(int);

double cache[103] = { 0 };
int n;

int main()
{
	cout.flags(cout.fixed);
	cout.precision(3);
	while (cin >> n)
	{
		double res = 0;
		for (int i = 1; i <= n; i++)
		{
			res += fibonacci(i + 2) / fibonacci(i + 1);
		}
		cout << res << endl;
	}
}

double fibonacci(int i)
{
	if (cache[i]) return cache[i];
	else cache[i] =  (pow((1 + sqrt(5)) / 2, i) - pow((1 - sqrt(5)) / 2, i) ) / sqrt(5);
	return cache[i];
}


/* 无法得出正确结果，斐波那契数列增长得很快，在给定范围内直接计算会超出unsigned long long范围 */
/* 如果要使用递推的方法，数组需要定义为double类型 */

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
