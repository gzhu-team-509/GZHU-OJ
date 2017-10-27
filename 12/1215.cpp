#include <iostream>
using namespace std;

int x;

int main()
{
	while (cin >> x)
	{
		if (x <= 0) cout << x << endl;
		if (x >= 1 && x < 10) cout << 5 * x - 10 << endl;
		if (x >= 10) cout << 10 * x - 20 << endl;
	}
}
