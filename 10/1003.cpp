#include <iostream>
#include <string>
#include <stack>
using namespace std;

stack<char> build;

// 判断字符串a代表的数字是否小于字符串b代表的数字
bool compare(string &a, string &b)
{
	if (a.length() != b.length()) return a.length() < b.length();
	else return a < b;
}

// 利用字符串a构造出比cmp代表的数字更大的字符串
string make(string a, string cmp = "")
{
	if (cmp == "") cmp = a;
	bool isodd = a.size() % 2;

	for (int i = 0; i < a.size() / 2 + isodd; ++i)
	{
		build.push(a[i]);
	}

	string b = a.substr(0, a.size() / 2);	

	while (!build.empty())
	{
		b += build.top();
		build.pop();
	}

	if (compare(cmp, b)) return b;
	else
	{
		for (int i = b.size() / 2 -(!isodd); i >= 0; --i)
		{
			if (b[i] == '9') {
				b[i] = '0';
				continue;
			}
			b[i] = char(b[i] + 1);
			break;
		}
		if (b[0] == '0') b = "1" + b;
		return make(b, a);
	}
}


int main()
{
	string a;
	while (cin >> a)
	{
		cout << make(a) << endl;
	}
}
