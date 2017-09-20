/**
 * 链接：
 * https://www.gzhuacm.cn/problem?pid=1031
 *
 */

/**
 * 题目分析：简单的输入输出练习
 * 
 */

#include <stdio.h>

int main(void)
{
    int line, count, sum, num;
    scanf("%d", &line);
    while(line--)
    {
        sum = 0;
        scanf("%d", &count);
        while(count--)
        {
            scanf("%d", &num);
            sum += num;
        }
        printf("%d\n", sum);
        if(line){
            putchar('\n');
        }
    }

    return 0;
}
