#include <iostream>
#include <cstdio>
#include <cctype>
using namespace std;

/**
 * 如果你使用传统的C语言IO函数，在此题中至少存在3个方面考验你程序的健壮性
 * 
 * 1) “数字”a，b可能由不是空格后换行符的字符隔开
 * 2) “数字”a，b中间间隔的字符可能不止一个
 * 3) 最后一组数据末尾没有换行符就到达文件末尾
 * 
 * 此外，尽管OJ在Ubuntu上运行，此题的换行符风格很可能是Windows风格。
 * 这种换行符混乱的现象在早期的OJ题目中经常出现。
 * 要规避困难，建议使用cin或其他流式输入。
 * 
**/
int main()
{
    char ch, lst = ' ';
    long long sum = 0, kase = 0;
    while (ch = getchar())
    {
        if (ch == EOF) {
            if (kase % 2) cout << sum << endl;
            break;
        }
        if (isdigit(ch)) sum += (ch - '0');
        if (!isdigit(ch))
        // 这里的判断条件改成 (isblank(ch) || ch == '\n') 就WA，或许是字符串的定界符不仅仅只有空白字符和换行符
        {
            if (!isdigit(lst)) continue; // 过滤掉连续的空白字符
            if (kase % 2) {
                cout << sum << endl;
                sum = 0;
            }
            kase++;
        }
        lst = ch;
    }
}
