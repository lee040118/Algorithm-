#include <bits/stdc++.h>
#define endl '\n'
typedef long long int lld;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF INT_MAX
using namespace std;
int n;
map<char, pair<char, char> > v;
void pre(char pos)
{
	cout<<pos;

	if(v[pos].first!='.') pre(v[pos].first);
	if(v[pos].second!='.') pre(v[pos].second);
}
void mid(char pos)
{

	if(v[pos].first!='.') mid(v[pos].first);
	cout<<pos;
	if(v[pos].second!='.') mid(v[pos].second);
}
void post(char pos)
{

	if(v[pos].first!='.') post(v[pos].first);
	if(v[pos].second!='.') post(v[pos].second);
	cout<<pos;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	cin>>n;
	rep(i,n) 
	{
		char a,b,c;
		cin>>a>>b>>c;
		v[a]={b,c};
	}
	
	pre('A');cout<<endl;
	mid('A');cout<<endl;
	post('A');
	return 0;
}