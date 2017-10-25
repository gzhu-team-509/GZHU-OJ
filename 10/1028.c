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
