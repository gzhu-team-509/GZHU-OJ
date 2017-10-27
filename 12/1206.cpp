#include <iostream>
#include <cmath>
using namespace std;

long n;

int main()
{
	while (cin >> n)
	{
		if (n <= 1)
		{
			cout << "No" << endl;
			continue;
		}
		double range = sqrt(n);
		long i;
		for (i = 2; i <= range; i++)
		{
			if (n % i) continue;
			else break;
		}
		if (i > range) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}
