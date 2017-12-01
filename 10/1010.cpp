#include <iostream>
using namespace std;

int main()
{
    string g = "GZHU", s;
    while (cin >> s)
    {
        if (!g.compare(s))
        {
            cout << "No" << endl;
            continue;
        }
        bool g = false, z = false, h = false;
        bool ok = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'G') {
                g = true;
                continue;
            }
            if (g && s[i] == 'Z') {
                z = true;
                continue;
            }
            if (g && z && s[i] == 'H') {
                h = true;
                continue;
            }
            if (g && z && h && s[i] == 'U') {
                ok = true;
                break;
            }
        }
        if (ok) cout << "Yes" << endl;
        else cout << "No" << endl; 
    }
}