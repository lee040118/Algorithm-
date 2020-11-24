#include <bits/stdc++.h>
#define endl '\n'
typedef long long int lld;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF INT_MAX
using namespace std;
long long dp[1001];
int a[1001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	int n;cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	int cnt=1,pos=0;
	for(int i=1;i<=n;i++)
	{
		if(dp[i-1]+cnt*a[i]>=dp[i-1])
		{
			dp[i]=dp[i-1]+cnt*a[i];
			cnt++;
			pos=0;
		}
		else if(pos==2)
		{
			if(a[i-1]<=a[i] && a[i-2]<=a[i])
			{
				dp[i]=dp[i-1]+a[i];
				cnt++;
				pos=0;
				continue;
			}
			else{
				dp[i]=dp[i-1]+max(a[i-1],a[i-2]);
				cnt=1;
				pos=0;
			}
		}
		else{
			cnt=1;
			pos++;
			dp[i]=dp[i-1];
		}
	}
	cout<<dp[n];
	// for(int i=1;i<=n;i++)
	// {
	// 	cout<<dp[i]<<" ";
	// }
	return 0;
}