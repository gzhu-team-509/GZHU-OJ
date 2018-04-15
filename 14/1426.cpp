/**
 * 题目分析：注意控制输出格式
 *
 */

// 消歧义：“输入只有一个实数n”不表示“只有一个测试用例”。 --来自我的14次WA
// 对付实数，请使用double。 --来自我的14次WA

#include <iostream>

using namespace std;

int main()
{
    double cai;
    while(cin >> cai)
    {
        double rmb = cai * 64240.44364973203;

        cout.flags(cout.fixed); // 采用小数格式（即不采用科学计数法）
        cout.precision(2);      // 保留精度到后小数点两位
        cout << rmb << endl;
    }

    return 0;
}
