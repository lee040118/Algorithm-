#include <bits/stdc++.h>
#define endl '\n'
typedef long long int lld;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF INT_MAX
using namespace std;
int dp[1001][1001];
char a[1001], b[1001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	
	cin>>a>>b;

	for(int i=1;i<=strlen(a);i++)
	{
		for(int j=1;j<=strlen(b);j++)
		{
			if(a[i-1]==b[j-1])
			{
				dp[i][j] = dp[i-1][j-1]+1;
			}
			else{
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	cout<<dp[strlen(a)][strlen(b)];
	return 0;
}