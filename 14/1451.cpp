/* 使用优先队列的实现 */
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
using namespace std;

int vis[11], weight[11];
priority_queue<int> bags[11];

void init();

int main()
{
    int bgcnt, oprt;
    while (scanf("%d%d", &bgcnt, &oprt) == 2)
    {
        init();

        for (int i = 1; i <= bgcnt; i++)
        {
            int blcnt;
            scanf("%d", &blcnt);
            for (int j = 0; j < blcnt; j++) 
            {
                int ball;
                scanf("%d", &ball);
                weight[i] += ball;
                bags[i].push(-ball);
            }
        }

        char cmd[20];
        while (oprt--)
        {
            scanf("%s", cmd);
            if (!strcmp(cmd, "push"))
            {
                int bag, ball;
                scanf("%d%d", &bag, &ball);
                weight[vis[bag]] += ball;
                bags[vis[bag]].push(-ball);
            }
            if (!strcmp(cmd, "pop"))
            {
                int bag;
                scanf("%d", &bag);
                if (weight[vis[bag]])
                {
                    int ball = -bags[vis[bag]].top();
                    bags[vis[bag]].pop();
                    weight[vis[bag]] -= ball;
                    printf("%d\n", ball);
                }
                else
                {
                    printf("-1\n");
                }
            }
            if (!strcmp(cmd, "mix"))
            {
                int tar, org;
                scanf("%d%d", &tar, &org);
                bool is_swap = false;
                if (bags[vis[tar]].size() < bags[vis[org]].size())
                {
                    is_swap = true;
                    swap(tar, org);
                }
                while (!bags[vis[org]].empty())
                {
                    int ball = -bags[vis[org]].top();
                    bags[vis[org]].pop();
                    bags[vis[tar]].push(-ball);
                    weight[vis[org]] -= ball;
                    weight[vis[tar]] += ball;
                }
                if (is_swap) swap(vis[tar], vis[org]);
            }
        }
    }
}

void init()
{
    for (int i = 1; i <= 10; i++)
    {
        vis[i] = i;
        weight[i] = 0;
        while (!bags[i].empty()) bags[i].pop();
    }
}
