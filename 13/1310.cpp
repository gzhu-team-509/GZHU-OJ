#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d1, d2;
        cin >> a >> b >> c;
        d1 = a + (int)pow(b, c);
        cin >> a >> b >> c;
        d2 = a + (int)pow(b, c);
        (d1 == d2) ? (cout << "YES" << endl) : (cout << "NO" << endl); 
    }    
}
