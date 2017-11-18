#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int t;
unsigned long cache[10000] = {0};

int main()
{
	// 素数打表
	int p = 0;
	memset(cache, -1, sizeof(cache));
	for (int i = 2; i <= 10000; i++)
	{
		double range = sqrt(i);
		int j;
		for (j = 2; j < range; j++)
		{
			if (i % j) continue;
			else break;
		}
		if (j > range) cache[p++] = i;
	}

#ifndef ONLINE_JUDGE
	for (int i = 0; i < 10000; i++)
	{
		if (cache[i]) cout << cache[i] << endl;
		else break;
	}
#endif // !ONLINE_JUDGE

	cin >> t;
	while (t--)
	{
		int n, cnt = 0;
		cin >> n;
		for (int i = 0; i <= 10000; i++)
		{
			if (n >= cache[i]) cnt++;
			else break;
		}
		cout << cnt << endl;
		for (int i = 0; cnt--; i++)
		{
			if (i) cout << ' ';
			cout << cache[i];
		}
		cout << endl;
	}
}
