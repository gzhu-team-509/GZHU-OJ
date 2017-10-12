/**
 * 链接：
 * https://www.gzhuacm.cn/problem?pid=1371
 *
 */

/**
 * 题目分析：
 * 可以思考朴素解法，也可以在数学上优化算法。
 * 【朴素解法】经典递归问题，要求第n行，必须先求出(n-1)行。
 * 【数学优化】杨辉三角的第n行是(n-1)次二项式的二项式系数的组合。
 * 
 * 由于数学优化需要计算大数的阶乘，计算结果将超出C++里unsigned long long的范围，
 * 故使用Java实现较为简便。
 * 
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned long long expansion[61][61] = {{0}, {0, 1}};
    for(int line=2; line<=60; line++)
    {
        for(int place=1; place<=line; place++)
        {
            expansion[line][place] = expansion[line-1][place-1] + expansion[line-1][place];
        }
    }

    int line;
    while(cin>>line)
    {
        for(int place=1; place<=line; place++)
        {
            cout << expansion[line][place];
            if(place!=line){
                cout << " ";
            }else{
                cout << endl;
            }
        }
    }
}
