/* 选择排序 - n个数总共交换n-1次，第i次将第i大的数与第i个数交换 */
#include <iostream>
using namespace std;

// 注意溢出
//! int num[2200];
unsigned int num[2200];

int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++) cin >> num[i];
        for (int i = 0; i < n - 1; i++)
        {
            int max = i;
            for (int j = i; j < n; j++)
            {
                if (num[j] > num[max]) max = j;
            }
            cout << num[max] << " " << num[i] << endl;
            swap(num[max], num[i]);
        }
        cout << endl;
    }
}
