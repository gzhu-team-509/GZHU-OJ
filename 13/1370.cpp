/* 递推加法尤其要注意检验数据边界，需要打表推断 */
#include <iostream>
using namespace std;

int main()
{
    long long F[70] = {1, 1};
    for (int i = 2; i <= 70; i++) F[i] = F[i-2] + F[i-1];
    int n;
    while (cin >> n)
    {
        cout << F[n] << endl;
    }
}
