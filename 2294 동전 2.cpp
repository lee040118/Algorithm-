#include <bits/stdc++.h>
#define endl '\n'
typedef long long int lld;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF INT_MAX
using namespace std;
int N,K;
int dp[101][10001],cost[101];

int topdouwn(int n, int k)
{
	if(n==N) return(k==0 ? 0 : INF);
	if(dp[n][k]!=-1) return dp[n][k];

	int result = topdouwn(n+1,k);
	if(k>=cost[n]) result = min(result,topdouwn(n,k-cost[n])+1);
	dp[n][k]=result;
    //cout<<cnt<<" "<<k<<" "<<result<<endl;
	return result;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	cin>>N>>K;
	rep(i,N)
	{
		cin>>cost[i];
	}
	// memset(dp,-1,sizeof(dp));
     for(int i=0; i<=N; i++)
        for(int j=0; j<=K; j++)
            dp[i][j] = -1;

	int result=topdouwn(0,K);
	if(result==INF) cout<<-1;
	else cout<<result<<endl;

	return 0;

}