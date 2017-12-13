#include <cstdio>

char carrier[200010];

int main()
{
    int cnt;
    while (scanf("%d ", &cnt) == 1)
    {
        scanf("%s", carrier);
        
        int tot = 0;
        for (int i = 0; i < cnt; i++)
        {
            if (carrier[i] == '>') break;
            else tot++;
        }
        for (int i = cnt - 1; i >= 0; i--)
        {
            if (carrier[i] == '<') break;
            else tot++;
        }
        printf("%d\n", tot);
    }
}
