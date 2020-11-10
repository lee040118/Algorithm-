#include <bits/stdc++.h>
#define endl '\n'
typedef long long int lld;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF INT_MAX
using namespace std;
int n,m;
int a[2001],dp[2001][2001];
int ispal(int s,int e)
{
	int &ret = dp[s][e];
	if(ret!=-1) return dp[s][e];

	ispal(s+1,e);
	ispal(s,e-1);
	int result = ispal(s+1,e-1);
	if(a[s]==a[e]&&result==1) ret=1;
	else ret=0;

	return ret;

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	
	cin>>n;
	rep(i,n) cin>>a[i];
	memset(dp,-1,sizeof(dp));

	for(int i=0;i<n;i++)
	{
		if(i<n-1)
		{
			if(a[i]==a[i+1]) dp[i][i+1]=1;
			else dp[i][i+1]=0;
		}
		dp[i][i] = 1;
	}
	ispal(0,n-1);
	cin>>m;
	rep(i,m)
	{
		int s,e;
		cin>> s>>e;
		cout<<dp[s-1][e-1]<<endl;
	}
	return 0;
}