#include <iostream>
using namespace std;

int main()
{
    long n, m, a;
    while (cin >> n >> m >> a)
    {
        long l = n / a; if (n % a) l++;
        long w = m / a; if (m % a) w++;
        cout << l * w << endl;
    }
}
