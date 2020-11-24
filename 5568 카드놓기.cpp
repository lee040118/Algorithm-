#include <bits/stdc++.h>
#define endl '\n'
typedef long long int lld;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF INT_MAX
using namespace std;
vector<int> v,idx;
set<string> s;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	int n,k;
	cin>>n>>k;
	rep(i,n)
	{
		int a;
		cin>>a;
		v.push_back(a);
	}
	// for(int i=0;i<k;i++)
	// {
	// 	idx.push_back(1);
	// }
	// for(int i=k;i<n;i++) idx.push_back(0);
	sort(v.begin(),v.end());
	//int cnt=0;
	do{
		// cnt++;
		string str;
		for(int i=0;i<k;i++)
		{
			// if(idx[i]==1) 
			str+=to_string(v[i]);
			//cout<<v[i]<<" ";
		}
		//cout<<str<<"\n";
		s.insert(str);
		//cout<<endl;

	}while(next_permutation(v.begin(),v.end()));

	//cout<<cnt;
	cout<<s.size();
	return 0;
}