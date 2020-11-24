#include <bits/stdc++.h>
#define endl '\n'
typedef long long int lld;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF INT_MAX
using namespace std;

char str[10][1000],ans[101];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	int n,h,w;
	cin>>n>>h>>w;
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<n*w;j++)
		{
			cin>>str[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i*w;j<i*w+w;j++)
		{
			for(int k=0;k<h;k++)
			{
				if(str[k][j]!='?')
				{
					ans[i]=str[k][j];
					break;
				}
			}		}
		if(ans[i]=='\0') ans[i]='?';
	}
	rep(i,n)
	{
		cout<<ans[i];
	}

	return 0;
}