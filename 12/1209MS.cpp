#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		int s = 0;
		int i = a;
		string str = "";
		while (i <= b)
		{	
			if (i % 42 == 0)
			{
				s++;
				if (s == 1) str += to_string(i);
				else  str += " " + to_string(i); 
			}
			i++;
		}
		    if (s != 0) cout << s << endl << str << endl;
			if (s == 0) cout << "None." << endl;
	}
}
