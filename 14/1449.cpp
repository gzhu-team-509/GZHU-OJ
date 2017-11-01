#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

unsigned int ball[10];

int main()
{
    int oprt;
    while (scanf("%*d%d", &oprt) == 1)          // 注意不是sacnf("...") == 2
    {
        memset(ball, -1, sizeof(ball));

        int cnt;
        scanf("%d", &cnt);
        for (int i = 0; i < cnt; i++) scanf("%d", &ball[i]);
        while (getchar() != '\n') continue;     // 吃掉后面的换行符

        sort(&ball[0], &ball[10]);
        int head = 0;

        string cmd;
        while (oprt--)
        {
            getline(cin, cmd);
            if (head < cnt) {
               printf("%d\n", ball[head++]);
            }
            else
            {
                printf("-1\n");
            }
        }
    }   
}
