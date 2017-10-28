#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    while (cin >> a >> b)
    {
        int n = 1, m = 1;
        for (int i = 0; i < a.length(); i++) n *= a[i] - 'A' + 1;
        for (int i = 0; i < b.length(); i++) m *= b[i] - 'A' + 1;
        if (n % 47 == m % 47) cout << "GO" << endl;
        else cout << "STAY" << endl;
    }
}
