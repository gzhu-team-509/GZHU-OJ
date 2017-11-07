/** 
 * RANK EX
 * 
 * 使用STL超时，需要手写左偏树。目前对STL能够胜任的数据量还没有很清楚的认识。
 * 这题不能使用优先队列的原因应该是优先队列mix操作太慢
 * 如果想在高级别的比赛中达到最佳效率，不能依赖STL。
 * 平时应该熟练掌握基本数据结构的写法。
 * 
 * 另外，一些竞赛的像 #define rep(i, a, b) 的黑话是要学习的；
 * 但是像 #progama comment("/STACK:102400000,102400000") 
 * 以及 #include <bits/stdc++.h> 这样的黑科技，还是就知道好。
 * 
**/
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

/**
 * MAXN = 100010 失败
 * MAXN = 300000 成功
 *
**/
const int MAXN = 300010;

struct Node
{
    int val;
    bool operator < (const Node &rhs) const
    {
        return val > rhs.val;
    }
};

struct LeftTree
{
    int tot;
    Node v[MAXN]; 
    int l[MAXN], r[MAXN], d[MAXN];

    int Init(int x)
    {
        tot++;
        v[tot].val = x;
        l[tot] = r[tot] = d[tot] = 0;
        return tot;
    }

    int Insert(int x, int y)
    {
        return Merge(x, Init(y));
    }

    int Top(int x)
    {
        return v[x].val;
    }

    int Pop(int x)
    {
        return Merge(l[x], r[x]);
    }

    int Merge(int x, int y)
    {
        if (!x) return y;
        if (!y) return x;
        if (v[x] < v[y]) swap(x, y);
        r[x] = Merge(r[x], y);
        if (d[l[x]] < d[r[x]]) swap(l[x], r[x]);
        d[x] = d[r[x]] + 1;
        return x;
    }
} tree;

/* 用长度为cnt的数组balls建堆 */
int BuildHeap(int cnt, int balls[])
{
    int top = tree.Init(balls[0]);
    for (int i = 1; i < cnt; i++)
    {
        int nxt = tree.Init(balls[i]);
        top = tree.Merge(top, nxt);
    }
    return top;
}

int main()
{
    int bgcnt, oprt;
    while (scanf("%d%d", &bgcnt, &oprt) == 2)
    {
        tree.tot = 0;
        int bags[bgcnt + 1] = { 0 };
        for (int i = 1; i <= bgcnt; i++) {
            int cnt;
            int balls[1005];
            scanf("%d", &cnt);
            for (int j = 0; j < cnt; j++) scanf("%d", &balls[j]);
            bags[i] = BuildHeap(cnt, balls);
        }
        
        while (oprt--)
        {
            char cmd[5];
            scanf("%s", cmd);
            if (!strcmp(cmd, "pop"))
            {
                int bag;
                scanf("%d", &bag);
                if (tree.Top(bags[bag]))
                {
                    printf("%d\n", tree.Top(bags[bag]));
                    bags[bag] = tree.Merge(tree.l[bags[bag]], tree.r[bags[bag]]);   
                    // 每次Merge操作需要及时更新堆顶编号
                }
                else printf("-1\n");
            }
            if (!strcmp(cmd, "push"))
            {
                int bag, ball;
                scanf("%d%d", &bag, &ball);
                bags[bag] = tree.Insert(bags[bag], ball);
            }
            if (!strcmp(cmd, "mix"))
            {
                int lhs, rhs;
                scanf("%d%d", &lhs, &rhs);
                bags[lhs] = tree.Merge(bags[lhs], bags[rhs]);
                bags[rhs] = 0;                                  
                // 不是bags[rhs] = Init(0);
            }
        }
    }
}
