#include <iostream>
using namespace std;

int points[5];
int flag;

int main()
{
	while (true)
	{
		flag = 0;
		for (int i = 0; i < 5; i++) {
			cin >> points[i];
			flag += points[i];
		}
		if (!flag) break;

		int max = 0;
		for (int j = 1; j <= 6; j++)
		{
			int appears = 0;
			for (int k = 0; k < 5; k++)	if (points[k] == j) appears++;
			if (appears * j > max) max = appears * j;
		}
		cout << max << endl;
	}
}
