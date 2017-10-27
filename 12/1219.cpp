#include <iostream>
using namespace std;

int a, b;

int main()
{
	while (cin >> a >> b)
	{
		int t = 1;
		for (int i = a; i <= b; i++)
		{
			int m = i, total = 0;
			do
			{
				total += m % 10;
			} while (m /= 10);
			if (total % 5) continue;
			else
			{
				if (t - 1) cout << "\t";
				cout << i;
				if (!(t % 5)) cout << endl;
				t = (t + 1) % 5;
			}
		}
	}
}
