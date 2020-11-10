#include <bits/stdc++.h>
#define endl '\n'
typedef long long int lld;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF INT_MAX
using namespace std;
int n,s,cnt;
int a[21];

void dfs(int pos, int k)
{
	if(k+a[pos]==s) cnt++;
	if(pos==n-1) return;
	dfs(pos+1,k);
	dfs(pos+1,k+a[pos]);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	cin>>n>>s;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	dfs(0,0);
	cout<<cnt;
	return 0;
}