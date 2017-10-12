/**
 * 链接：
 * https://www.gzhuacm.cn/problem?pid=1371
 *
 */

/**
 * 题目分析：经典递归问题，注意数据应该用何种基本数据类型表示，需要缓存计算结果以优化程序性能
 * 
 */

#include <iostream>

using namespace std;

long long cache[71] = {0, 1, 2};

long long jump(int);

int main()
{
    int stairs;
    while(cin>>stairs)
    {
        long long temp = jump(stairs);
        cout << temp << endl;
        cache[stairs] = temp;
    }

    return 0;
}

long long jump(int stairs)
{
    if(stairs==1) return 1;
    if(stairs==2) return 2;
    if(cache[stairs]) return cache[stairs];
    return jump(stairs-1) + jump(stairs-2);
}
