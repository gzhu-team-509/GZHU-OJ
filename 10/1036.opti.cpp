/* FAST BUT UGLY */
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char sea[10010], danger[15];
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
                
                bool is_equal = true;
                int length = strlen(danger);
                for (int i = 1; i < length; i++) {
                    if (ptr[i] != danger[i]) is_equal = false;
                }
                if (is_equal)
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
