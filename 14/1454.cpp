/* INCOMPLETE */

/** 
 * RANK EX
 * 
 * 使用STL超时，需要手写左偏树。目前对STL能够胜任的数据量还没有很清楚的认识。
 * 如果想在高级别的比赛中达到最佳效率，不能依赖STL。
 * 平时应该熟练掌握基本数据结构的写法。
 * 
 * 另外，一些竞赛的像 #define rep(i, a, b) 的黑话是要学习的；
 * 但是像 #progama comment("/STACK:102400000,102400000") 
 * 以及 #include <bits/stdc++.h> 这样的黑科技，还是就知道好。
 * 
**/
#include <cstdio>
#include <algorithm>

struct LeftTree
{
    const int MAXN = 3010005;

    int tot;
    int v[MAXN], l[MAXN], r[MAXN], d[MAXN];

    int Init(int x)
    {
        tot++;
        v[tot] = x;
        l[tot] = r[tot] = d[tot] = 0;
    }

    int Insert(int x, int y)
    {
        return Merge(x, Init(y));
    }

    int Top(int x)
    {
        return v[x];
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
};

int main()
{

}
