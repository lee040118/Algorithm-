#include <bits/stdc++.h>
#define endl '\n'
typedef long long int lld;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF INT_MAX
using namespace std;
char a[1001],b[1001];
int dp[1001][1001];
char ans[1001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	cin>>a>>b;
	int asize= strlen(a), bsize = strlen(b);
	for(int i=1;i<=asize;i++)
	{
		for(int j=1;j<=bsize;j++)
		{
			if(a[i-1]==b[j-1]) 
			{
				dp[i][j]=dp[i-1][j-1]+1;
			}
			else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	int y = asize, x=bsize, idx=0;
	// rep(i,asize+1)
	// {
	// 	rep(j,bsize+1)
	// 	{
	// 		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	while(dp[y][x]!=0)
	{
		if(dp[y][x]==dp[y-1][x])
		{
			y--;
		}
		else if(dp[y][x]==dp[y][x-1])
		{
			x--;
		}
		else if(dp[y][x]==dp[y-1][x-1]+1)
		{
			ans[idx++] = b[x-1];
			x--;
			y--;
		}
	}
	cout<<dp[asize][bsize]<<endl;
	for(int i=idx-1;i>=0;i--)
	{
		cout<<ans[i];
	}
	
	return 0;
}