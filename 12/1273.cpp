#include <iostream>
using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        if (a > b) swap(a, b);
        int square = 0, cubic = 0;
        for (int i = a; i <= b; i++)
        {
            if (i % 2) cubic += i * i * i;
            else square += i * i; 
        }
        cout << square << ' ' << cubic << endl;
    }
}
