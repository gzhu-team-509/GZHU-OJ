#include <bits/stdc++.h>
using namespace std;

const int maxN = 1000100; 
int father[maxN]; 

void init(int x)
{
	for (int i = 1; i <= x; ++i)
		father[i] = i;
}

int find(int x)
{
	return father[x] = father[x] == x ? x : find(father[x]); 
}

int merge(int x, int y)
{
	x = find(x), y = find(y); 
	father[x] = y; 
}

int main()
{
	int n, q, kase = 0; 
	while (scanf("%d%d", &n, &q) == 2)
	{
		init(n);
		
		printf("Case #%d:\n", ++kase);
		while (q--)
		{
			int x; scanf("%d", &x);
			x = find(x); 
			printf("%d\n", x);
			merge(x, x==1? find(n) : find(x-1)); 
		}
	} 
} 

