/* FAST BUT UGLY */
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

        int exp = 0, smile = 0;
        for (char * ptr = sea; *ptr != '\0'; ptr++)
        {
            if (*ptr == danger[0])
            {
                /** 
                 * 判断str接下来的几个字符跟danger是否相等
                 * 
                 * 错误的写法是 if (strstr(ptr, danger) != NULL)
                 *
                **/

                char sub[strlen(danger) + 1];
                strncpy(sub, ptr, strlen(danger));
                if (strstr(sub, danger) != NULL)
                {
                    smile++;
                    continue;
                }
            }
            exp += (*ptr - '0') * 10;
        }

        printf("%d\nGoldfish smiles %d times.\n", exp, smile);
        printf("\n");
    }
}
