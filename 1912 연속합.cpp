#include <bits/stdc++.h>
#define endl '\n'
typedef long long int lld;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF INT_MAX
using namespace std;
int a[100001],dp[100001];
int n;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	cin>>n;
	rep(i,n)
	{
		cin>>a[i];
	}
	dp[0]=a[0];
	int ans = dp[0];

	for(int i=1;i<n;i++)
	{
		dp[i]= max(dp[i-1]+a[i],a[i]);
		ans = max(ans, dp[i]);
	}
	cout<<ans;
	return 0;
}