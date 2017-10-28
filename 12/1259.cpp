#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int x, y, x1, y1, x2, y2;
    while (scanf("%d,%d %d,%d %d,%d", &x, &y, &x1, &y1, &x2, &y2) == 6)
    {
        if (x >= min(x1, x2) && x <= max(x1, x2) && y >= min(y1, y2) && y <= max(y1, y2))
        {
            cout << "Yes" << endl;
            continue;
        }
        cout << "No" << endl;
    }
}
