/* Luxurious Houses */
#include <iostream>
using namespace std;

const int MAXN = 100500;

int floor[MAXN];
int ans[MAXN];

int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++) cin >> floor[i];
        
        for (int i = n - 1, mx = floor[i] - 1; i >= 0; i--)
        {
            ans[i] = (floor[i] > mx) ? 0 : mx - floor[i] + 1;
            mx = max(mx, floor[i]);
        }

        for (int i = 0; i < n; i++) 
        {
//!         此题测试数据格式有误
//!         if (i) cout << " ";
//!         cout << ans[i];
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}
