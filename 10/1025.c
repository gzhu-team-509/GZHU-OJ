#include <stdio.h>

int main(void)
{
    int count, a, b;
    scanf("%d", &count);
    while (count--)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}
