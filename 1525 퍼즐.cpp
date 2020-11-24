#include <bits/stdc++.h>
#define endl '\n'
typedef long long int lld;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF INT_MAX
using namespace std;
const int ans = 123456789;
map<int, int> mp;
int dx[]={0,0,-1,1}, dy[]={-1,1,0,0};

void bfs(int cur)
{
	queue<int> q;
	q.push(cur);
	mp[cur] = 0;
	while(!q.empty())
	{
		int cur= q.front();
		string s = to_string(cur);
		q.pop();
		//cout<<s<<endl;
		if(ans==cur) return;
		int z = s.find('9');
		int x = z%3;
		int y = z/3;
		for(int i=0;i<4;i++)
		{
			int nx=dx[i]+x, ny=dy[i]+y;
			if(nx>2||ny>2||nx<0||ny<0) continue;
			string tmp=s;
			swap(tmp[nx+ny*3],tmp[x+y*3]);
			int next = stoi(tmp);
			if(!mp.count(next))
			{
				mp[next] = mp[cur]+1;
				q.push(next);
			}	
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int st=0;
	rep(i,3)
	{
		rep(j,3)
		{
			int tmp;
			cin>>tmp;
			if(tmp==0) tmp=9;
			st=(st*10)+tmp;
		}
	}
	if(st==ans) {cout<<0; return 0;}
	bfs(st);

	if(!mp[ans]) cout<<"-1";
	else cout<<mp[ans];
	return 0;
}