#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int total = 0;
        while(n--)
        {
            int t;
            cin >> t;
            do 
            {
                int i = t % 10;
                if (i == 1) total++;
            } while (t /= 10);
        }
        cout << total << endl;
    }
}
