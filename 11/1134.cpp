#include <bits/stdc++.h>
using namespace std;

const int INF  = 0x3F3F3F3F;
const int maxN = 50050;

int dp[maxN];

int main()
{
	fill(dp, dp+maxN, INF);
	dp[0] = -INF;
	
	int n; scanf("%d", &n);
	while (n--) 
	{
		int num; scanf("%d", &num);
		int pos = upper_bound(dp, dp+maxN, num)-dp;
		dp[pos] = num;
	}
	
	int ans = 0;
	while (dp[ans+1] != INF) ++ans;
	printf("%d\n", ans);
} 
