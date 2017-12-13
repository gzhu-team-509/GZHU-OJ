#include <iostream>
#include <cstdio>
using namespace std;

int n;

int main()
{
	while (cin >> n)
	{
		printf("%dC is %.2lfF or %.2lfK\n", n, (double)n * 1.8 + 32, double(n) + 273.15);
	}
}
