#include <iostream>
using namespace std;

int main()
{
	int n, a[100001];
	while (cin >> n)
	{	
		int max = -1, min = 100001;
		for (int i = 0; i < n; i++)
		{	
			cin >> a[i];
			if (a[i] > max) max = a[i];
			if (a[i] < min) min = a[i];
		}
		cout << max << ' ' << min << endl;
	}
}
