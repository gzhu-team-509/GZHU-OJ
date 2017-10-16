/**
 * 链接：
 * https://www.gzhuacm.cn/problem?pid=1430
 *
 */

/**
 * 题目分析：
 * 通过数学分析来优化程序。
 * 1. 数学上可以证明，要判断(1, b]范围内的实数m是否为质数，只需要判断m能否被小于等于b的算数平方根的数整除
 * 2. 通过数学分析或这穷举搜索算法可知，条件3永远成立
 * 
 */

/* UMCOMPLETE */
#include <iostream>

using namespace std;

bool is_prime(long long);

int main()
{
    int cases;

    cin >> cases;

    while (cases--)
    {
        long long input, range;
        cin >> input;
        range = 2 * input;

        for(long long i = input; i<=range; i++)
        {
            
        }
    }

    return 0;
}

bool is_prime(long long num)
{
    long long range = sqrt(num) + 1;
    for(long long i = 2; i <= range; i++)
    {
        if(num % i == 0){
            return false;
        }
    }
    return true;
}
