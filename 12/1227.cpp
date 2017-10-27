#include <iostream>
#include <string>
using namespace std;

string a;
int b;

int main()
{
	while (cin >> a >> b)
	{
		cout << "$";
		int leading = a.size() % 3;
		if (!leading) leading = 3;
		for (int i = 0; i < a.size(); i++)
		{
			if (leading--) {
				cout << a[i];
			}
			else 
			{
				leading = 2;
				cout << ',' << a[i];
			}
		}
		b < 10 ? (cout << ".0" << b ): (cout << "." << b );
		cout << endl;
	}
}
