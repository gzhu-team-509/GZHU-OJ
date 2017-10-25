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
