/**
 * 链接：
 * https://www.gzhuacm.cn/problem?pid=1029
 *
 */

/**
 * 题目分析：简单的输入输出练习
 * 
 */

#include <stdio.h>

int main(void)
{
    int count, sum, num;
    while(scanf("%d", &count) != EOF)
    {
        sum = 0;
        while(count--)
        {
            scanf("%d", &num);
            sum += num;
        }
        printf("%d\n", sum);
    }

    return 0;
}
