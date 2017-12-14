#include <cstdio>
#include <algorithm>
using namespace std;

struct element
{
    int val, idx;
    bool operator ==(element e)
    {
        if (val == e.val) return true;
        else return false;
    }
    bool operator <(element e)
    {
        return val < e.val;
    }
} array[100010];

int main()
{
    int n, q; scanf("%d%d", &n, &q);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i].val);
        array[i].idx = i;
    }

    sort(array, array + n);
    while (q--)
    {
        element query; scanf("%d", &query.val);
        element ans = *lower_bound(array, array + n, query);
        if (ans == query)
            printf("Pos = %d\n", ans.idx);
        else
            printf("No response.\n");
    }
}
