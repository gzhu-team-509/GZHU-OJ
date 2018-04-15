/**
 * 题目分析：小心地前进。
 *
 * 如果在循环中读取数据，在某时刻判断下一次循环读入的数据不能满足题意并提早退出，
 * 需要及时将本次测试用例剩余数据读入，避免影响下一个测试用例的判断。
 *
 */

/* UGLY HACK */
#include <iostream>
using namespace std;

int main()
{
    int n, k;
    while (cin >> n >> k)
    {
        int count = 0, now;
        while (n--)
        {
            cin >> now;
            if (now > 0) {
                count++;
            }
            else
            {
                while (n--){
                    // 清空队尾
                    cin >> now;
                    if (!n) break;
                }
                n = 0;
                break;
            }
            if (!(--k))
            {
                break;
            }
        }
        int score = now;  // 临界位置的分数
        while (n--)
        {
            cin >> now;
            if (now == score) {
                count++;
            }
            else {
                while (n--)
                {
                    // 清空队尾
                    cin >> now;
                }
                break;
            }
        }
        cout << count << endl;
    }

    return 0;
}
