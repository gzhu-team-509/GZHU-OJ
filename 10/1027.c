#include <stdio.h>

int main(void)
{
    int num, count = 0, sum = 0;
    while (scanf("%d", &count)!=EOF)
    {
        if (!count){
            break;
        }
        while (count--)
        {
            scanf("%d", &num);
            sum += num;
        }   
        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}
