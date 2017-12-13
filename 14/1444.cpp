#include <iostream>
using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        int s = a;
        while (--b) s *= a;
        cout << s << endl;
    }
}
