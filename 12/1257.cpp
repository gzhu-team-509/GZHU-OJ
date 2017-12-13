#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    while (scanf("%d,%d %d,%d", &x1, &y1, &x2, & y2) == 4)
    {
        double diagonal = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        cout << diagonal * diagonal / 2 << endl;
    }
}
