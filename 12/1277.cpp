#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int m, n, i;
	float s;
	while (cin >> m)
	{
		while (m--)
		{
			s = 0;
			cin >> n;
			for (i = 1; i <= n; i++)
				s = s + (1 / (pow(-1, i + 1) * i));
			cout.flags(cout.fixed);
			cout.precision(2);
			cout << s << endl;
		}
	}
	return 0;
}
