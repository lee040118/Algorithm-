#include <bits/stdc++.h>
#define endl '\n'
typedef long long int lld;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF INT_MAX
using namespace std;
int n;
int a[2][100001];
int dp[1000001][3];

int topdown(int c, int status)
{
	if(c==n) return 0;
	if(dp[c][status]!=-1) return dp[c][status];

	int result = topdown(c+1,0);
	if(status!=1) result=max(result,a[0][c]+topdown(c+1,1));
	if(status!=2) result=max(result,a[1][c]+topdown(c+1,2));
	dp[c][status]=result;
	return result;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		rep(i,2)
			rep(j,n) cin>>a[i][j];
		memset(dp,-1,sizeof(dp));
		cout<<topdown(0,0)<<endl;
		
		// rep(i,n)
		// {
		// 	rep(j,3)
		// 	{
		// 		cout<<dp[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }
	}

	return 0;
}