#include <iostream>
#include <cstring>
using namespace std;

int n[31][31];

int main()
{
    memset(n, 0, sizeof(n));
    n[1][1] = 1;
    for (int i = 2; i < 31; i++)
    {
        for (int j = 1; j < 31; j++)
        {
            n[i][j] = n[i-1][j-1] + n[i-1][j];
        }
    }

    int t;
    while (cin >> t)
    {
        int sum = 0;
        for (int i = 1; i <= t; i++) sum += n[t][i];
        cout << sum << endl;
    }
}
