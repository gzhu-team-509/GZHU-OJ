#include <iostream>
#include <cstdio>
using namespace std;

int ch;

int main()
{
	while (ch = getchar())
	{
		if (ch == EOF) break;
		if (ch > 31 && ch < 127)
		{
			if (ch == ' ') continue;
			cout << ch << endl;
		}
	}
}
