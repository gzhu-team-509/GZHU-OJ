#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int sum = 0;
        while (n--) {
            int t;
            cin >> t;
            sum += t;
        }
        cout << sum << endl;
    }
}
