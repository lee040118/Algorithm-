#include <bits/stdc++.h>
#define endl '\n'
typedef long long int lld;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF INT_MAX
using namespace std;
int n;
int dp[100001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	cin>>n;

	for(int i=1;i*i<=n;i++)
		dp[i*i]=1;

	for(int i=1;i<=n;i++)
	{
		for(int j=1;i+j*j<=n;j++)
			if(dp[i+j*j]!=0) dp[i+j*j]=min(dp[i+j*j], dp[i]+1);
			else dp[i+j*j]=dp[i]+1;
	}
	cout<<dp[n];
	
	return 0;
}