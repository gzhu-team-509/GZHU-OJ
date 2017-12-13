/* WA 原因不明 */

/**
 * 测试用例中最后一组数据没有换行符就到达了EOF？
 * 仅靠cin本身不可能兼容[数据/换行符/EOF]和[数据/EOF]两种格式？ 
 * 
 * 请使用如果用cin，请配合string。这样会方便很多。
 * 最简单的办法还是使用scanf()。
**/
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

unsigned long long n;
char ch;

int main()
{
    cin >> n;
    while(true)
    {
        if (n <= 32767) cout << "short" << endl;
        else if (n <= 2147483647) cout << "int" << endl;
        else if (n <= 9223372036854775807) cout << "long long" << endl;
        else cout << "It is too big!" << endl;
        if (cin.eof()) break;      // 判断上次输入结束后是否到达EOF
        cin.clear();               // 若没有到达文件末尾，则重置cin为可用状态
        cin >> n;
    }
}
