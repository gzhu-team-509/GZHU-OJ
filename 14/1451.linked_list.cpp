/* INCOMPLETE */
/* 双向链表的实现 */
#include <cstdio>

/** 
 * balls[1][1]：第1个袋子中最小重量的球的重量；balls[1][0]：第1个袋子中的总球数
 * nxt[1][1]：第1个袋子中1号球的下一个球的编号
**/
int balls[11][150];
int nxt[11][150];
int bft[11][150];

void init();

int main()
{
    int bag, oprt;
    while (scanf("%d%d", &bag, &oprt) == 2)
    {
        for (int i = 1; i <= bag; i++)
        {
            scanf("%d", &balls[i][0]);
            for (int j = 1; j <= balls[i][0]; j++) scanf("%d", &ball[i][j]);        
        }

        init();

    }
}

void init()
{
    for (int i = 1; i <= 10; i++) sort(&balls[i][1], balls[i+1]);
    for (int i = 1; i <= 10; i++) 
    {
        for (int j = 1; j <= balls[i][0]; j++)
        {
            nxt[]
        }
    }
}
