/* https://gzhuacm.cn/problem?pid=1201 */

/* 17/10/25 - 本题测试数据最后一行没有换行符！ */
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int ch;
    int space = 0;
    while ((ch = getchar()))
    // 不能写成 while ((ch = getchar()) != EOF)
    {
        if (ch == ' ') space++;
        if (ch == '\n')
        {
            cout << space << endl;
            space = 0;
        }
        if (ch == EOF)
        {
            cout << space << endl;
            break;
        }
    }
}

/* 可以用getline()来处理自动处理最后一行没有换行符的情况 */
int main_alt()
{
    string s;
    while (getline(cin, s))
    {
        int space = 0;
        int l = s.size();
        for (int i = 0; i < l; i++)
        {
            if (s[i] == ' ') space++;
        }
        cout << space << endl;
    }
}
