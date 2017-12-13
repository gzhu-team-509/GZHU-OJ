#include <iostream>
using namespace std;

int a, b, c;

int main()
{
	while (cin >> a >> b >> c)
	{
		if (a > b) swap(a, b);
		if (a > c) swap(a, c);
		if (b > c) swap(b, c);
		cout << c << endl;
	}
}
