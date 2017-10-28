#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, sum;
        cin >> a >> b >> c >> d;
        sum = max(max(a, b), c) + (d % 10) * 100 + (d / 10) % 10 * 10 + (d / 100);
        cout << sum << endl;
    }
}
