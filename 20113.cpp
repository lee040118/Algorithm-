#include <bits/stdc++.h>
#define endl '\n'
typedef long long int lld;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF INT_MAX
using namespace std;
pair<int,int> cnt[102];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	int n;
	cin>>n;
	rep(i,n)
	{
		int a;
		cin>>a;
		if(a!=0){
			cnt[a].first++;
			cnt[a].second=a;
		}
	}
	sort(cnt,cnt+n+1);
	if(cnt[n].first==cnt[n-1].first) cout<<"skipped";
	else cout<<cnt[n].second;
	return 0;
}