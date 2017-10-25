#include <iostream>
#include <cstring>
using namespace std;

int n;
long long s[50001];
int q;

int main()
{
    memset(s, 0, sizeof(s));
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        s[i] = s[i-1] + temp; 
    }

    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << s[r] - s[l-1] << endl;
    }
}
