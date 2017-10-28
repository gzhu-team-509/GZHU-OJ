#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout.flags(cout.fixed);
    cout.precision(2);

    double x1, y1, x2, y2;
    while (cin >> x1 >> y1 >> x2 >> y2)
    {
        double dis = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        cout << dis << endl;
    }
}
