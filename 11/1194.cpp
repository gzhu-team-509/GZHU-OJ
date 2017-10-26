#include <iostream>
using namespace std;

int year;

int main()
{
    while (cin >> year)
    {
        if (!(year % 100))
        {
            if (!(year % 400)) cout << "YES" << endl;
            else cout << "NO" << endl;
            continue;
        }
        if (!(year % 4)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
