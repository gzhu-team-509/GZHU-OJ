#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        long long res = 1;
        int t;
        while (n--)
        {
            cin >> t;
            if (t % 2) res *= t;
        }
        cout << res << endl;
    }
}
