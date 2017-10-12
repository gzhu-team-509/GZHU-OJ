/**
 * 链接：
 * https://www.gzhuacm.cn/problem?pid=1368
 *
 */

/**
 * 题目分析：简单的输入输出练习
 * 
 */

#include <stdio.h>

int main(void)
{
    int c;
    double f;
    while(scanf("%d", &c)!=EOF)
    {
        f = ((double)c - 32) * 5 / 9;
        printf("%.2lf\n", f);
    }

    return 0;
}
