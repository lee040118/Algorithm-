#include <bits/stdc++.h>
#define endl '\n'
typedef long long int lld;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF INT_MAX
using namespace std;

string str[101];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	int n;
	cin>>n;
	rep(i,n)
	{
		cin>>str[i];
	}
	int ans=0;
	rep(i,n)
	{
		rep(j,n)
		{
			if(str[i][j]==str[j][i]) ans++;
			//cout<<str[j][i];
		}
		//cout<<endl;
	}

	if(ans==n*n) cout<<"YES";
	else cout<<"NO";
	
	return 0;
}