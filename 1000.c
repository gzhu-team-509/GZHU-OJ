/**
 * 链接：
 * https://www.gzhuacm.cn/problem?pid=1000
 *
 */

/**
 * 题目分析：简单的输入输出
 * 
 */

#include <stdio.h>

int main(void)
{
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF)
    {
        printf("%d\n", a+b);
    }
    return 0;
}
