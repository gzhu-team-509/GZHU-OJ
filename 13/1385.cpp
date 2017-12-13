/* https://www.gzhuacm.cn/problem?pid=1385 */

#include <iostream>
using namespace std;

int main()
{
    int n, jewelry[10001];
    while (cin >> n)
    {   
        for (int i = 0; i < n; i++) {
            cin >> jewelry[i];
        }
        
        int max = 0, total = 0;
        for (int p = 0; p < n; p++)
        {
            if (jewelry[p]) total--;
            else total++;
            if (total <= 0) total = 0;
            if (total > max) max = total;
        }
        
        cout << max << endl;
    }
}
