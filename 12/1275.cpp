#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout.flags(cout.fixed);
    cout.precision(2);
    
    int n, m;
    while (cin >> n >> m)
    {
        long double sum = n, nxt = n;
        for (int i = 2; i <= m; i++)
        {
            nxt = sqrtl(nxt);
            sum += nxt;
        }
        cout << sum << endl;
    }
}
