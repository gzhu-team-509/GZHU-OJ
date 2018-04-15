#include<iostream>
using namespace std;
int main()
{
	int m, n, i, temp, sum1, sum2;
	while (cin >> m >> n)
	{
		sum1 = sum2 = 0;
		if (m > n)
		{
			temp = m; m = n; n = temp;  //可使用swap(a, b);
		}
		for (i = m; i <= n; i++)
		{
			if (i % 2 == 0)
				sum1 += i*i;
			else
				sum2 += i*i*i;
		}
		cout << sum1 <<' '<<sum2 << endl;
	}
}
