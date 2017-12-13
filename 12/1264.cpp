#include <iostream>
#include <string>
using namespace std;

string a, b;

int main()
{
    while (cin >> a >> b)
    {
        int i;
        if ((i = a.find(b)) != string::npos)
        {
            cout << i + 1 << endl;
            continue;
        }
        cout << -1 << endl;
    }
}
