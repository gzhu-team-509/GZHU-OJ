#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0) break;
        int pos = 0, neg = 0, zero = 0;
        double t;
        while (n--)
        {
            cin >> t;
            if (t == 0) zero++;
            if (t > 0) pos++;
            if (t < 0) neg++;
        }
        cout << neg << ' ' << zero << ' ' << pos << endl;
    }
}
