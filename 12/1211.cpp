#include <iostream>
#include <cstdio>
using namespace std;

double n;

int main()
{
	while (cin >> n)
	{
		double t = 1 / (n / 62.14 / 3.875);
		printf("%.2lfL/100km equals to %.2lfmpg.\n", n, t);
	}
}
