// Math - 梯形积分法，是不可能的 
// 进一步的做法利用函数的周期性求出[0, 2π]内的较精确值，
// 再放大，这样是可行的

#include <bits/stdc++.h>
using namespace std;

double val(double x) {
	return sin(cos(x));
}

double cal(double a, double b) {
	double cell = (b-a)/13250, ans = 0;
	for (double i=a; i<=b; i+=cell) {
		ans += cell*val(i);
	}
	return abs(ans);
}

int main()
{	
	int t; scanf("%d", &t);
	while (t--) {
		double a, b; scanf("%lf%lf", &a, &b); 
		printf("%.1f\n", cal(a, b));
	}
}
