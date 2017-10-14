/**
 * 链接：
 * https://www.gzhuacm.cn/problem?pid=1427
 *
 */

// 别忘了末尾的空格哦

#include <iostream>

using namespace std;

int main()
{
    int sum = 0, temp;
    for(int i=0; i<10; i++)
    {
        cin >> temp;
        sum += temp;
    }
    cout << sum << endl;

    return 0;
}
