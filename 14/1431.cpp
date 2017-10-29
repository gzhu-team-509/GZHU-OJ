/* TLE */
#include <cstdio>
#include <cstring>
using namespace std;

char s[1000];

int main()
{
    while (scanf("%s", s) == 1)
    {
        if (strlen(s) % 2) {
            printf("NO\n");
            continue;
        } 
        bool flg;
        int length = strlen(s);
        int half = length / 2;
        for (int i = 0; i < length; i++)
        {
            int range = i + half;
            for (int j = i; j < range; j++)
            {
                if (s[j % length] == s[(j + half) % length]) {
                    flg = true;
                    continue;
                }
                else {
                    flg = false;
                    break;
                }
            }
            if(flg) break;
        }
        if (flg) printf("YES\n");
        else printf("NO\n");
    }
}
