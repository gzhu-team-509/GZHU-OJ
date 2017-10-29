#include <iostream>
using namespace std;

int main()
{
    long long a, b, c, sum;
    while (cin >> a >> b >> c)
    {
        if (a > b) swap(a, b);
        if (a > c) swap(a, b);
        if (b > c) swap(b, c);
        
        if (a > 0) sum = a + b + c;
        else if (b > 0) sum = a + b + c;
        else sum = b + c + a;
        cout << sum << endl;
    }
}
