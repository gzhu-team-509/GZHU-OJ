#include <bits/stdc++.h>
using namespace std;

// Editorial:
// http://codeforces.com/blog/entry/19237 

string smallest(string s)
{
	if (s.size() % 2 == 1) return s;
	string s1 = smallest(s.substr(0, s.size()/2));
	string s2 = smallest(s.substr(s.size()/2));
	return s1 < s2 ? s1+s2 : s2+s1; 
} 

int main()
{
	string a, b;
	while (cin >> a >> b)
	{
		cout << (smallest(a) == smallest(b) ? "YES" : "NO") << endl; 
	} 
}
