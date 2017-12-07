#include <iostream>
using namespace std;

int main()
{
    int n[101];
    int m[6];
    while (cin >> n[0])
    {
        for (int i = 1; i<= n[0]; i++) cin >> n[i];
        cin >> m[0];
        for (int i = 1; i<= m[0]; i++) cin >> m[i];
        long long res = 1;
        for (int i = 1; i <= m[0]; i++) res *= n[m[i]];
        cout << res << endl;
    }
}
