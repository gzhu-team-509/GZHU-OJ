#include <iostream>
#include <cmath>
using namespace std;

int a, b, c;

int main()
{
    cout.flags(cout.fixed);
    cout.precision(3);

    while (cin >> a >> b >> c)
    {
        if (a == 0)
        {
            if (b == 0)
            {
                if (c == 0)
                {
                    cout << "inf" << endl;
                }
                else{
                    cout << "impossible" << endl;
                }
            } 
            else 
            {
                // a == 0, b != 0
                if (c == 0)
                {
                    cout << "0.000" << endl;
                }
                else 
                {
                    cout << (double)-c / b << endl;
                }
            }
        }
        else
        {
            double delta = b * b - 4 * a * c;
            if (delta > 0)
            {
                cout << (-b + sqrt(delta)) / 2 * a  << " " << (-b - sqrt(delta)) / 2 * a << endl;
            }   
            else if (delta == 0)
            {
                cout << -b / 2 * a << endl;
            }
            else 
            {
                cout << "impossible" << endl;
            }
        }
    }
}
