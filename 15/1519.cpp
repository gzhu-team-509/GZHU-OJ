// Math - Simpson»ý·Ö
// Reference - https://blog.csdn.net/qq_38576126/article/details/77855204

#include <bits/stdc++.h> 
using namespace std;

double F(double x) {
	return sin(cos(x));
}

double simpson(double a,double b)
{
    double c = a + (b-a)/2;
    return (F(a) + 4*F(c) + F(b))*(b-a)/6;
}
double asr(double a,double b,double eps,double A)
{
    double c = a + (b-a)/2;
    double L = simpson(a,c), R = simpson(c,b);
    if(fabs(L + R - A) <= 15*eps)return L + R + (L + R - A)/15.0;
    return asr(a,c,eps/2,L) + asr(c,b,eps/2,R);
}
double asr(double a,double b,double eps)
{
    return asr(a,b,eps,simpson(a,b));
}

int main()
{
	int t; scanf("%d", &t);
	while (t--) {
		double a, b; scanf("%lf%lf", &a, &b);
		printf("%.1f\n", abs(asr(a, b, 1e-8)));
	}
}
