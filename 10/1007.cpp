#include <iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		if (n == 1 || n == 2) cout << "-1" << endl;
		else
		{
			for (int i = n; i > 0; i--)
			{
				if (i == 1) cout << 1 << endl;
				else cout << i << " ";
			}
		}
	}
}
