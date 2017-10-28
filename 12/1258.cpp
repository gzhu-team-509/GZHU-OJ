#include <iostream>
using namespace std;

int main()
{
    long n;
    while (cin >> n)
    {
        int kase = 0;
        int i = 2;
        while (i <= n)
        {
            if (n % i) i++;
            else {
                if (kase++) cout << " ";
                cout << i;
                n /= i;
            }
        }
        cout << endl;
    }
}
