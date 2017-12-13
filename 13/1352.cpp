#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        unsigned long long res = 0, x;
        cin >> n;
        while (n--) {
            cin >> x;
            res += x * x * x;
        }
        cout << res << endl;
    }
}
