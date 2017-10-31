#include <iostream>
#include <cstdio>
using namespace std;

unsigned long long n;

int main()
{
    /** 
     * Thanks to @dapao
     * 
     * 此处不能简单地使用(cin >> n)，
     * 输入数据太大时，(cin >> n)会将n设为可表示的最大值，但会产生错误使表达式的值为假；
     * 并且cin不会丢弃输入，这导致死循环。
     * 不知道怎么使用cin
    **/
    while (scanf("%llu", &n) != EOF)    // 输入过大时，n被设为最大值，直到下一个分界符的输入都被丢弃
    {
        if (n <= 32767) {
            cout << "short" << endl;
            continue;
        }
        if (n <= 2147483647) {
            cout << "int" << endl;
            continue;
        }
        if (n <= 9223372036854775807) {
            cout << "long long" << endl;
            continue; 
        }
        cout << "It is too big!" << endl;
    }
}
