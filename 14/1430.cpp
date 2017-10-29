/* https://www.gzhuacm.cn/problem?pid=1430 */

/**
 * 题目分析：
 * 通过数学分析来看清事情的真相。
 * 1. a总是正整数。条件1永远成立。
 * 2. 总是存在至少一个素数p，使得 n < p < 2n − 2，其中n为大于3的任一自然数。条件2永远成立。
 * 3. 通过数学分析或这穷举搜索算法可知，条件3永远成立。
 * 
**/

#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        long long i;
        scanf("%lld", &i);
        printf("%lld\n", i);
    }
}
