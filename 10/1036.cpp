#include <cstdio>
#include <cstring>
using namespace std;

const int MAXN = 10010;

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char sea[MAXN], danger[MAXN];
        scanf("%s%s", sea, danger);

        char * ptr = sea;
        while (ptr = strstr(ptr, danger), ptr != NULL)
        {
            *ptr = '0';
        }
        // while (ptr = strstr(sea, danger), ptr != NULL) 要比上面的方法慢许多

        int exp = 0, smile = 0;
        int length = strlen(sea);
        for (int i = 0; i < length; i++)
        {
            if (sea[i] == '0') smile++;
            exp += (sea[i] - '0') * 10;
        }
        // for (int i = 0; i < strlen(sea); i++) 要比上面的方法慢许多

        printf("%d\nGoldfish smiles %d times.\n", exp, smile);
        printf("\n");
    }
}
