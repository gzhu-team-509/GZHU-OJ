/* Wrong Answer */
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
                if (strstr(ptr, danger) != NULL) {
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
