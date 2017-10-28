#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	int t;
	int x1, y1, x2, y2;
	int ch;

	cin >> t;
	while (t--)
	{
		scanf(" %c%d", &ch, &y1);
		x1 = ch - 'a' + 1;
		
		scanf(" %c%d", &ch, &y2);
		x2 = abs(ch - 'a' + 1);

		int dis_x = abs(x2 - x1), dis_y = abs(y2 - y1);
		int step = max(dis_y, dis_x);
		cout << step << endl;
	} 
}
