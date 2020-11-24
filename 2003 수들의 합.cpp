#include <bits/stdc++.h>
#define endl '\n'
typedef long long int lld;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF INT_MAX
using namespace std;
int a[10001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	int n,m;
	cin>>n>>m;
	rep(i,n)
	{
		cin>>a[i];
	}
	int st=0,e=0;
	int sum=0,cnt=0;
	while(st<=e)
	{
		if(e==n) break;
		sum+=a[e];
		if(sum<m){
			e++;
			continue;
		}
		if(sum==m) cnt++;	
		sum-=a[st++];
		cout<<sum<<endl;

	}
	cout<<cnt;
	
	return 0;
}