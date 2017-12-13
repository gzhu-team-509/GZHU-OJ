#include <iostream>
#include <string>
using namespace std;

int a, b;

int main()
{
	while (cin >> a >> b)
	{
		int cnt = 0;
		string s = "";
		for (int i = a; i <= b; i++)
		{
			if (i % 42) continue;
			else s += (cnt ? " " + to_string(i) : to_string(i));
			cnt++;
		}
		if (cnt)
		{
			cout << cnt << endl;
			cout << s << endl;
		}
		else
		{
			cout << "None." << endl;
		}
	}
}
