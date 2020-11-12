#include <bits/stdc++.h>
#define endl '\n'
typedef long long int lld;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF INT_MAX
using namespace std;
int cross(int x1,int y1,int x2,int y2)
{
	return x1*y2-y1*x2;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	int x1,x2,x3,y1,y2,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	int c = cross(x2-x1, y2-y1, x3-x1, y3-y1);
    if(c > 0) puts("1");
    else if(c < 0) puts("-1");
    else puts("0");

	
	return 0;
}