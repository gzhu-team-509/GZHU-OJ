#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n <= 1) {
            cout << "No" << endl;
            continue;
        }
        int i = 2, range = (int)sqrt(n) + 1;
        while (n % i && i < range) i++;
        if (i == range) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
