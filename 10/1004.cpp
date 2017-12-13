#include <iostream>
using namespace std;

int num[110];

int main()
{
	int n;
	while (cin >> n)
	{
		for (int i = 1; i <= n; i++) cin >> num[i];
		for (int i = 1; i <= n; i++)
		for (int j = i + 1; j <= n; j++)
		{
			int sum = num[i] + num[j];
			for (int k = 1; k <= n; k++)
			{
				if (sum == num[k]) 
				{
					cout << k << " " << i << " " << j << endl;
					goto finishing;
				}
			}
		}

failure:
		cout << "-1" << endl;

finishing:
		continue;
	}
}
