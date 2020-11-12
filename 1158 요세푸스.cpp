#include <bits/stdc++.h>
#define endl '\n'
typedef long long int lld;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF INT_MAX
using namespace std;
int n,k;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	cin>>n>>k;
	queue<int> q;
	for(int i=1;i<=n;i++)
	{
		q.push(i);
	}
	cout<<"<";
	while(1)
	{
		for(int i=0;i<k-1;i++)
		{
			q.push(q.front());
			q.pop();
		}
		cout<<q.front();
		q.pop();
		if(q.empty())
		{
			cout<<">";
			break;
		}
		else cout<<", ";
	}
	return 0;
}