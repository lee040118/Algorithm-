#include <bits/stdc++.h>
#define endl '\n'
typedef long long int lld;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF INT_MAX
using namespace std;
int arr[102],cost[102],dp[100002];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	int n,m;
	cin>>n>>m;	
	for(int i=1;i<n+1;i++){
		cin>>arr[i];
	}
	int csize=0;
	for(int i=1;i<n+1;i++)
	{
		cin>>cost[i];
		csize+=cost[i];
	}
	
	for(int i=1;i<n+1;i++)
	{
		for(int j=csize;j>=cost[i];j--)
		{
			dp[j]=max(dp[j],dp[j-cost[i]]+arr[i]);
		}
	}
	for(int i=0;i<=csize;i++)
	{
		if(dp[i]>=m)
		{
			cout<<i;
			return 0;
		}
	}

	
	return 0;
}