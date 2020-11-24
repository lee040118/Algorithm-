#include <bits/stdc++.h>
#define endl '\n'
typedef long long int lld;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF INT_MAX
using namespace std;
int n,m;
vector<int> v,idx,ans;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	cin>>n>>m;
	for(int i=n;i>=1;i--)
	{
		idx.push_back(i);
	}
	for(int i=0;i<m;i++)
	{
		v.push_back(1);
	}
	for(int i=m;i<n;i++) v.push_back(0);
	sort(v.begin(),v.end());
	//rep(i,n) cout<<v[i]<<" ";
	//cout<<endl;

	do{
		rep(i,n)
		{
			if(v[i]==1)
			{
				ans.push_back(idx[i]);
			}
		}
		sort(ans.begin(),ans.end());
		for(int i=0;i<ans.size();i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
		ans.clear();
	}while(next_permutation(v.begin(),v.end()));
	
	return 0;
}