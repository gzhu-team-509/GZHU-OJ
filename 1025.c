/**
 * 链接：
 * https://www.gzhuacm.cn/problem?pid=1025
 *
 */

/**
 * 题目分析： 输入输出练习
 *
 */

#include <stdio.h>

int main(void)
{
    int count, a, b;
    scanf("%d", &count);
    while(count--)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }

    return 0;
}
