/**
 * 链接：
 * https://www.gzhuacm.cn/problem?pid=1027
 *
 */

/**
 * 题目分析： 简单的输入输出练习
 * 
 */

#include <stdio.h>

int main(void)
{
    int num, count = 0, sum = 0;
    while(scanf("%d", &count)!=EOF)
    {
        if(!count){
            break;
        }
        while(count--)
        {
            scanf("%d", &num);
            sum += num;
        }   
        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}
