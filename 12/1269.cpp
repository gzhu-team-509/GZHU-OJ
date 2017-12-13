#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout.flags(cout.fixed);
    cout.precision(2);
    
    double n;
    while (cin >> n)
    {
        cout << abs(n) << endl;
    }
}
