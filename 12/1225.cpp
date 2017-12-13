#include <iostream>
#include <cstring>
#include <string>
using namespace std;

char alphabet[26];
string s;
int x;

int main()
{
	for (int i = 0; i < 26; i++) alphabet[i] = 'A' + i;
	while (cin >> s >> x) 
	{
		for (int i = 0; i < s.size(); i++)
		{
			int pos = strchr(alphabet, s[i]) - (char *)alphabet - x;
			while (pos < 0) pos += 26;
			cout << alphabet[pos];
		}
		cout << endl;
	}
}
