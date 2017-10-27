#include <iostream>
using namespace std;

int n, digits[5];

int main()
{
	while (cin >> n)
	{
		int digit = 0;
		do
		{
			digits[digit++] = n % 10;
		} while (n /= 10);
		cout << digit;
		for (int i = digit - 1; i >= 0; i--)
		{
			cout << " " << digits[i];
		}
		cout << endl;
		for (int i = 0; i < digit; i++)
		{
			cout << digits[i];
		}
		cout << endl;
	}
}
