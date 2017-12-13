#include <iostream>
#include <algorithm>
using namespace std;

int n, t;
long num[3001];

bool cmp(int, int);

int main()
{
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }    
        sort(&num[0], &num[n], cmp);
        for (int i = 0; i < n; i++)
        {
            if (i) cout << " ";
            cout << num[i];
        }
        cout << endl;
    }
}

bool cmp(int a, int b)
{
    return a < b;
}
