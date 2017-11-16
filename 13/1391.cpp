/** 
 * 韩信点兵233
 * 
 * 观察发现数列的后一项是前一项与105的和
**/
#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int t;
        scanf("%d", &t);
        (t < 23) ? printf("-1\n") : printf("%d\n", t - (t - 23) % 105);
    }
}
