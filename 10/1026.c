#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    while (!(a==0 && b==0))
    {
        printf("%d\n", a+b);
        scanf("%d%d", &a, &b);
    }

    return 0;
}

// GCC 对 while(scanf("%d%d", &a, &b), !(a==0&&b==0)) 的处理疑似存在bug
// G++ 与 GCC 对while(scanf("%d%d", &a, &b), !(a==0&&b==0)) 的处理表现不同
