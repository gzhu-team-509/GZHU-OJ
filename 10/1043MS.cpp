#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x1, x2, x3, y1, y2, y3, a, b, c, s, p , r, k1, k2;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3)
	{
			a = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
			a = sqrt(a);
			b = (x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1);
			b = sqrt(b);
			c = (x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2);
			c = sqrt(c);
			p = (a + b + c) / 2;
			s = p*(p - a)*(p - b)*(p - c);
			if (s < 1e-8)
				cout << "Wrong input" << endl;
			else {
				s = sqrt(s);
				r = (2 * s) / (a + b + c);
				cout.flags(cout.fixed);
				cout.precision(2);
				cout << r << endl;
			}
		
	}
}