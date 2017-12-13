#include <iostream>
#include <string>
#include <sstream>
using namespace std;

unsigned long long n;
string s;

int main()
{
    while (cin >> s)
    {
        if (s.length() > 19) {
            cout << "It is too big!" << endl;
            continue;
        }
        stringstream ss(s);
        ss >> n;
        if (n <= 32767) cout << "short" << endl;
        else if (n <= 2147483647) cout << "int" << endl;
        else if (n <= 9223372036854775807) cout << "long long" << endl;
        else cout << "It is too big!" << endl;
    }
}
