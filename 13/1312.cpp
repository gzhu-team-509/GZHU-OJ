#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        scanf("%*d%*d%d", &n);
        (n % 5) ? (cout << "xiaoming" << endl) : (cout << "xiaogang" << endl);
    }
}
