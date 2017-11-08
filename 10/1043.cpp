#include <iostream>
#include <cmath>
using namespace std;

const double EPS = 1e-4;

/* 判定浮点数的符号 */
int cmp(double x)
{
    if (fabs(x) < EPS) return 0;
    if (x > 0) return 1;
    else return -1;
}

/* 海伦公式 */
double heron(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
    cout.flags(cout.fixed);
    cout.precision(2);
    
    double x1, x2, x3;
    double y1, y2, y3;
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3)
    {
        double a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        double b = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
        double c = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
        double s = heron(a, b, c);

        if (cmp(s))
        {
            cout << 2 * s / (a + b + c)<< endl; 
        }
        else cout << "Wrong input" << endl;
    }
}
