/* https://gzhuacm.cn/problem?pid=1202 */

/* 利用递归的奇怪版本 */
#include <iostream>
#include <cstdio>
using namespace std;

void reverse(int);

int main()
{
    int ch;
    while ((ch = getchar()) != EOF)
    {
        reverse(ch);
        cout << endl;
    }
}

void reverse(int ch)
{
    int nxt = getchar();
    if (nxt != '\n') reverse(nxt);
    cout << (char)ch;
}
