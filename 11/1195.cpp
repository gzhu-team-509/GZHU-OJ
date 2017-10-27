#include <iostream>
using namespace std;

int n;

int main()
{
    while (cin >> n)
    {
        if (n > 999 || n < 100)
        {
            cout << "NO" << endl;
            continue;
        }
        int a, b, c;
        c = n % 10;
        b = n / 10 % 10;
        a = n / 100 % 10;
        if (n == a * a * a + b * b * b + c * c * c)
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
}
