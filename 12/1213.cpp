#include <iostream>
#include <cctype>
using namespace std;

char ch;

int main()
{
	while (cin >> ch)
	{
		if (isupper(ch)) cout << (char)tolower(ch) << endl;
		else cout << ch << endl;
	}
}
