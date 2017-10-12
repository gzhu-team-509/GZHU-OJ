/**
 * 链接：
 * https://www.gzhuacm.cn/problem?pid=1376
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

void get_expansion(int[], int);
int get_coefficient(int n, int k);

int main()
{
    int line, frequency, set[61];
    while(cin>>line)
    {
        frequency = line - 1;
        coefficient(set, frequency);
        for(int i=1; i<= line; i+=){
            cout << set[i];
        }
        cout << endl;
    }
    
    return 0;
}

void get_expansion(int set[], int frequency)
{
    for(int i=1; i < frequency + 1; i++)
    {
        set[i] = get_coefficient(frequency+1, i-1);
    }
}

int get_coefficient(int n, int k)
{
    
}
