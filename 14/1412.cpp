#include <bits/stdc++.h>
using namespace std;
using LL = long long;

LL gcd(LL a, LL b)
{
	return b==0 ? a : gcd(b, a%b); 
}

int main()
{
	LL a, b, c;
	while (cin >> a >> b >> c) 
	{
		LL g;
		g = gcd(a, c); a/= g, c/= g;
		g = gcd(b, c); b/= g, c/= g;
		cout << a*b/c << endl;
	}
}
