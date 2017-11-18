// 数据边界意识
#include <iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        long sum = 0;
        do {
            sum += n;
        } while (--n);    // 此处需要分号
        cout << sum << endl;
    }

    return 0;
}
