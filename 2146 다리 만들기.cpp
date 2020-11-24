#include <bits/stdc++.h>
#define endl '\n'
typedef long long int lld;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF INT_MAX
using namespace std;
int arr[101][101];
bool check[101][101], bfscheck[101][101];
int n;
int res=INF;
int dx[]={0,0,-1,1}, dy[]={-1,1,0,0};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	cin>>n;
	rep(i,n) rep(j,n) cin>>arr[i][j];

	rep(i,n) 
		rep(j,n)
		{
			if(arr[i][j] && !check[i][j])
			{
				queue<pair<int,int> > q,realq;
				q.push({j,i});
				check[i][j]=true;
				while(!q.empty())
				{
					int size = q.size();
					while(size--)
					{
						int x = q.front().first;
						int y= q.front().second;
						realq.push({x,y});
						bfscheck[y][x]=true;
						q.pop();
						for(int k=0;k<4;k++)
						{
							int nx=x+dx[k],ny=y+dy[k];
							if(nx<0||nx>=n||ny<0||ny>=n||check[ny][nx]||!arr[ny][nx]) continue;
							q.push({nx,ny});
							check[ny][nx]=true;
						}
					}
				}
				bool flag=false, exit_flag=false;
				int cnt=-1;
				while(!realq.empty())
				{
					int size = realq.size();
					while(size--)
					{
						int x = realq.front().first;
						int y = realq.front().second;
						bfscheck[y][x]=true;
						if(flag && arr[y][x]==1)
						{
							res = min(res, cnt);
							exit_flag = true;
							break;
						}
						realq.pop();
						for(int k=0;k<4;k++)
						{
							int nx=x+dx[k],ny=y+dy[k];
							if(nx<0 || nx>=n || ny<0 || ny>=n || bfscheck[ny][nx]) continue;
							if(!flag && arr[ny][nx]==1) continue;
							realq.push({nx,ny});
							bfscheck[ny][nx]=true;
						}
					}
					if(exit_flag) break;
					flag = true;
					cnt++;
				}
				memset(bfscheck,false,sizeof(bfscheck));
			}
		}

	cout<<res;
	return 0;
}