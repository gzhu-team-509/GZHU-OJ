/* RANK D */
/** 
 * 单向链表的实现 
 * 
 * 双向链表或者优先队列更为方便
**/
#include <iostream>
#include <cstdio>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

int ball[150];
int nxt[150];

void init(int cnt); // 初始化ball和nxt数组，参数为ball数组中最后一个有效元素的下标

int main()
{
    int oprt;
    while (scanf("%*d%d", &oprt) == 1)
    {
        int cnt;
        scanf("%d", &cnt);
        for (int i = 1; i <= cnt; i++) scanf("%d ", &ball[i]);
        
        init(cnt);

        string cmd;
        while (oprt--)
        {
            getline(cin, cmd);
            
            #ifdef DEBUG
            cout << "<< ";
            for (int i = nxt[0]; i; i = nxt[i])
            {
                cout << ball[i] << " ";
            }
            cout << ">>" << endl;
            #endif
            
            if (~cmd.find("pop"))
            {
                if (ball[nxt[0]]) 
                {
                    printf("%d\n", ball[nxt[0]]);
                    nxt[0] = nxt[nxt[0]];
                }
                else printf("-1\n");
            }
            if (~cmd.find("push"))
            {
                stringstream ss(cmd);
                ss.ignore(4, ' ');
                ss.ignore(1, ' ');
                ss >> ball[++cnt];

                /* 处理空链表的情况 */
                if (!nxt[0])
                {
                    nxt[cnt] = 0;
                    nxt[0] = cnt;
                    continue;
                }

                int lst = 0;
                for (int i = nxt[0]; true; i = nxt[i])
                {
                    /* 处理新增项不超过原有最大项的情况 */
                    if (ball[i] >= ball[cnt])
                    {
                        nxt[cnt] = nxt[lst];
                        nxt[lst] = cnt;
                        break;
                    }

                    /* 处理新增项大于原有最大项的情况，这种情况在i == 0时发生 */
                    if (!i)
                    {
                        nxt[lst] = cnt;
                        nxt[cnt] = 0;
                        break;
                    }

                    lst = i;
                }
            }
        }
    }
}

void init(int cnt)
{
    sort(&ball[0], &ball[cnt+1]);
    
    /* 实现链表 */
    nxt[0] = 0;
    for (int i = 1; i <= cnt; i++)
    {
        nxt[i] = nxt[i-1];
        nxt[i-1] = i;
    }
}
