/**
 * 链接：
 * https://www.gzhuacm.cn/problem?pid=1430
 *
 */

/**
 * 题目分析：注意数据的大和小和控制输出格式
 * 
 */

 
/* !!! WA !!!*/
#include <iostream>

using namespace std;

int main()
{
    unsigned long long cai;
    cin >> cai;

    cout.flags(cout.fixed);
    cout.precision(2);
    
    cout << cai * 64240.44364973203 << endl;
    
    return 0;
}
