#include <iostream>
using namespace std;

int n;
long a, b;

int main()
{
    cin >> n;
    while (n--)
    {
        int total = 0;
        cin >> a >> b;
        while (true)
        {
            if (a < b) swap(a, b);
            if (b == 0)
            {
                total++;
                break;
            }
            total += a / b;
            a %= b;
        }
        cout << total << endl;
    }
}
