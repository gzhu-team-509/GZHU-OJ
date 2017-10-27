#include <iostream>
using namespace std;

int n, grade[100];

int main()
{
    while (cin >> n)
    {
        int mx = -1, sum = 0, pass = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> grade[i];
            sum += grade[i];
            if (grade[i] > mx) mx = grade[i];
            if (grade[i] >= 60) pass++;
        }
        cout.flags(cout.fixed);
        cout.precision(2);
        cout << mx << ' ' << (double)sum / n << ' ' << pass << endl;
        for (int i = 0; i < n; i++)
        {
            if (i) cout << ' ';
            if (grade[i] != 100) cout << grade[i] + 1;
            else cout << 100;
        }
        cout << endl;
    }
}
