#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        bool flg = false;
        for (int i = 0; i < 10; i++)
        {
            if (flg) break;
            for (int j = 0; j < 10; j++) {
                if (flg) break;
                int n = i * 10000 + j * 1000 + a * 100 + b * 10 + c;
                if (!(n % 123)) flg = true;
            }
        } 
        flg ? (cout << "YES" << endl) : (cout << "NO" << endl);
    }
}
