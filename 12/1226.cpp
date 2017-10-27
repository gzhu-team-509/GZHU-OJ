#include <iostream>
using namespace std;

int n;

int main()
{
	while (cin >> n)
	{
		int t = n, cnt = 0;
		do
		{
			int c = t % 10;
			if (c && !(n % c)) cnt++;
		} while (t /= 10);
		cout << cnt << endl;
	}
}
