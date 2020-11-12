#include <bits/stdc++.h>
#define endl '\n'
typedef long long int lld;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF INT_MAX
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	int n,k;
	cin>>n>>k;
	queue<int> q[21];		
	long long cnt=0;
	rep(i,n)
	{
		string s;
		cin>>s;
		int len = s.length();	
		int rank=i;
		
		while(!q[len].empty())
		{
			if(rank-q[len].front()>k)
			{
				q[len].pop();
			}
			else{
				break;
			}
		}
		cnt+=q[len].size();
		q[len].push(i);
			
	}
	cout<<cnt;
	return 0;
}
