/* 作弊 */
#include <iostream>
#include <algorithm>
using namespace std;

int n[4];

int main()
{
	while (cin >> n[0] >> n[1] >> n[2] >> n[3])
	{
		sort(&n[0], &n[4]);
		for (int i = 0; i < 4; i++)
		{
			if (i) cout << " ";
			cout << n[i];
		}
		cout << endl;
	}
}
