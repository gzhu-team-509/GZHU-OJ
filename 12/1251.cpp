#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 2) {
            cout << "NO" << endl;
            continue;
        }
        if (n % 2)
        {
            cout << "NO" << endl;
            continue;
        }
        else 
        {
            cout << "YES" << endl;
            continue;
        }
    }
}
