#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b;
        cin >> n >> b;
        int low = (n / b) * b;
        int up = (n / b + 1) * b; 
        (up - n <= n - low) ? (cout << up << endl) : (cout << low << endl);
    }
}
