#include <iostream>
using namespace std;

int t;
long n, m, a;

int main()
{
	cin >> t;
	while (t--)
	{
		cin >> n >> m >> a;
		long long l = n / a;
		long long w = m / a;
		if (n % a) l++;
		if (m % a) w++;
		cout << l * w << endl;
	}
}
