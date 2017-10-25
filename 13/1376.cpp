/**
 * 题目分析：经典数学问题，一个整数是否能被分为两个偶数的和？
 * 
 */

#include <iostream>
using namespace std;

int main()
{
    int w;
    while (cin>>w)
    {
        if(w % 4)
        {
            if(!(w % 2))
            {
                int a = w / 2;
                if ((a-1) > 0) cout << "YES" << endl;
                else cout << "NO" << endl;
            } 
            else 
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
