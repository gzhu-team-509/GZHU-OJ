#include <iostream>
using namespace std;

int n;

int main()
{
	while (cin >> n)
	{
		int h, m, s;
		s = n % 60;
		m = (n / 60) % 60;
		h = (n / 3600);
		cout << h << ':' << m << ':' << s << endl;
	}
}
