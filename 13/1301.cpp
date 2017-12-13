#include <iostream>
#include <queue>
using namespace std;

struct node
{
    int time, effect;
    bool operator < (node rhs) const
    {
        if (time != rhs.time)
        return time > rhs.time;
        else return effect < rhs.effect;
    }
};

int main()
{
    int n;
    while (cin >> n)
    {
        priority_queue<node> que;
        while (n--)
        {
            int time;
            node tmp;

            cin >> time;
            tmp = {time, 1};
            que.push(tmp);
            
            cin >> time;
            tmp = {time, -1};
            que.push(tmp);
        }

        int max_idle = 0, con_idle = 0;
        int max_ongo = 0, con_ongo = 0;
        int now_worker = 0;
        int last_time = que.top().time;             // 定义初始值的时候要注意，不能定义为0

        while (!que.empty())
        {
            node tmp = que.top();
            que.pop();
//！        last_time = last_time ? tmp.time        // 出错，当time为0时

            if (now_worker == 0)
            {
                con_idle += tmp.time - last_time;
                con_ongo = 0;
                max_idle = max(max_idle, con_idle);
            }

            if (now_worker >= 1)
            {
                con_ongo += tmp.time - last_time;
                con_idle = 0;
                max_ongo = max(max_ongo, con_ongo);
            }

            now_worker += tmp.effect;
            last_time = tmp.time;
        }

        cout << max_ongo << " " << max_idle << endl;
    }
}
