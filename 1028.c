/**
 * 链接：
 * https://www.gzhuacm.cn/problem?pid=1028
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
        scanf("%d", &count);
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
