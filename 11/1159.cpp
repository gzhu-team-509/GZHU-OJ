#include <iostream>
using namespace std;

int n, t;

int main()
{
    while (cin >> n)
    {
        int mx = -1, mn = 100001;
        while (n--)
        {
            cin >> t;
            if (t > mx) mx = t;
            if (t < mn) mn = t;     
        }
        cout << mx << " " << mn << endl;
    }
}
