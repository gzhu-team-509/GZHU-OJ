#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s, a;
	while (getline(cin,s))
	{	
		a.clear();
		int n = s.length(), sum1 = 0;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '-') sum1++;
		}

		bool negative = false;
		
		if (sum1 % 2 != 0) negative = true;
			else negative = false;
		
		bool isprefix = true;

		for (int i = 0; i < n; i++)
		{
			if (s[i] != '+'&&s[i] != '0'&&s[i] != '-'&&s[i] != ' ')
			{
				a += s[i];
				if (isdigit(s[i]))
					isprefix = false;
			}
			if (s[i] == '0' && !isprefix)
				a += s[i];
		}
		
		if (isprefix) 
		{
			cout << "0" << endl;
			continue;
		}
		else
		{
			if (negative) cout << "-";
			cout << a << endl;
		}
	}
}
