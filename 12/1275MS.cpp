#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double n, m, sum, a;
	while (cin >> n >> m)
	{
		sum = n;
		for (int i = 1; i < m; i++)
		{
			n = sqrt(n);
			sum += n;
		}
		cout.flags(cout.fixed);
		cout.precision(2);
		cout << sum << endl;
	}
}
